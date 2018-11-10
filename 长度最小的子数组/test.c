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