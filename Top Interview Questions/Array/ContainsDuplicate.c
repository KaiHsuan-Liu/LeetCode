/*
LeetCode - 0217. Contains Duplicate (Easy)
URL: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/
*/

#include <stdio.h>

/*Time Limit Exceeded*/
bool containsDuplicate1(int* nums, int numsSize) {
	int i, j;
	for (i = 0; i < numsSize; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (nums[i] == nums[j])
			{
				return true;
			}
			printf("%d, %d\n", nums[i], nums[j]);
		}
	}
	return false;
}

/********************************************/

/*Sorting*/
void sort(int* nums, int numsSize)
{

}
bool containsDuplicate2(int* nums, int numsSize) {
  
	sort(nums, numsSize);
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			return true;
		}
	}

	return false;
}

int main(void)
{
	int nums[] = {1,2,3,4};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	//printf("Result 1: %d\n", containsDuplicate1(nums, numsSize));
	printf("Result 2: %d\n", containsDuplicate2(nums, numsSize));
	return 0;
}
