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
	int k = 0;
	for (i = 2; i < numsSize; i++)
	{
		for (j = 0; j < numsSize-i; j++)
		{
			for (k = j + 1; k < j+i; k++)
			{
				if (nums[j] + nums[k] == s)
				{
					return i;
				}
			}
		}
	}
	return 0;
}

int main()
{
	int nums[] = { 2, 3, 1, 2, 4, 3 };
	int s = 7;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret = minSubArrayLen(s, nums, numsSize);
	printf("%d ", ret);
	system("pause");
	return 0;
}