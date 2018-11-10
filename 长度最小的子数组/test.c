//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的连
//续子数组。如果不存在符合条件的连续子数组，返回 0。
//示例 :
//输入 : s = 7, nums = [2, 3, 1, 2, 4, 3]
//输出 : 2
// 解释 : 子数组[4, 3] 是该条件下的长度最小的连续子数组。
//  进阶 :
//如果你已经完成了O(n) 时间复杂度的解法, 请尝试 O(n log n) 时间复杂度的解法。

#include<stdio.h>
#include<Windows.h>

int minSubArrayLen(int s, int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= s)
		{
			return 1;
		}
	}
	for (i = 2; i <= numsSize; i++)
	{
		for (j = 0; j <= numsSize - i; j++)
		{
			sum = 0;
			int k = j + i;
			for (int h = j; h < k; h++)
			{
				sum += nums[h];
			}
			if (sum >= s)
				return i;
		}
	}
	return 0;
}

int main()
{
	int nums[] = { 1, 2, 3, 4, 5 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int s = 15;
	int ret = minSubArrayLen(s, nums, numsSize);
	printf("%d ", ret);
	system("pause");
	return 0;
}