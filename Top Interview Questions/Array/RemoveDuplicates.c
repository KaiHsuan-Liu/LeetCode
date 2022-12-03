/*
LeetCode - 0026. Remove Duplicates from Sorted Array (Easy)
URL: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/
*/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
	int i = 0;
	
	for (int j = 1; j < numsSize; j++)
	{
		if (nums[j] != nums[i])
		{
			i++;
			nums[i] = nums[j];
		}
	}
	
	return i+1;
}

int main(void)
{
	int nums[] = {1, 1, 2};
	int k = sizeof(nums) / sizeof(nums[0]);
	printf("Length: %d\n", removeDuplicates(nums, k));
	
	return 0;
}
