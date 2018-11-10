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
	for (i = 1; i < numsSize; i++)
	{
		sum = 0;
		for (j = 0; j <i; j++)
		{
			sum += nums[j];
		}
		if (sum >= s)
		{
			return i;
		}

	}
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