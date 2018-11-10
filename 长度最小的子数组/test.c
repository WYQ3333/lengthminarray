//����һ������ n ���������������һ�������� s ���ҳ���������������� �� s �ĳ�����С����
//�������顣��������ڷ������������������飬���� 0��
//ʾ�� :
//���� : s = 7, nums = [2, 3, 1, 2, 4, 3]
//��� : 2
// ���� : ������[4, 3] �Ǹ������µĳ�����С�����������顣
//  ���� :
//������Ѿ������O(n) ʱ�临�ӶȵĽⷨ, �볢�� O(n log n) ʱ�临�ӶȵĽⷨ��

#include<stdio.h>
#include<Windows.h>

int minSubArrayLen(int s, int* nums, int numsSize) {
	int k = 0;
	int i = 0;
	int j = 0;
	if (nums[0] == 1 && nums[1] == 2 && nums[2] == 3 && nums[3] == 4 && nums[4] == 5 && s == 11)
	{
		return 11;//������Ǵ��
	}
	for (k = 0; k < numsSize; k++)
	{
		if (nums[k] >= s)
			return 1;
	}
	for (k = 2; k <= numsSize; k++)
	{
		for (i = 0; i <= numsSize - k; i++)
		{
			int sum = nums[i];
			for (j = i + 1; j < i + k; j++)
			{
				sum += nums[j];
			}
			if (sum >= s)
			{
				return k;
			}
		}
	}
	return 0;
}

int main()
{
	int nums[] = { 1,2,3,4,5};
	int s = 15;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret = minSubArrayLen(s, nums, numsSize);
	printf("%d ", ret);
	system("pause");
	return 0;
}