/*
LeetCode - 0189. Rotate Array (Easy)
URL: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
*/

#include <stdio.h>

/*Time Limit Exceeded*/
void rotateArray1(int* nums, int numsSize, int k)
{

	for (int i = 0; i < numsSize; i++)
	{
		printf("%d\t", nums[i]);
	}
  
	printf("\n");

	for (int i = 0; i < k; i++)
	{
		int last = 0;
		last = nums[numsSize - 1];
		for (int j = numsSize - 1; j >= 0; j--)
		{	
			nums[j] = nums[j - 1];
		}
		nums[0] = last;
	}
  
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d\t", nums[i]);
	}
}

int main(void)
{
	int nums[] = {1,2,3,4,5,6,7};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int k = 3;
	rotateArray1(nums, numsSize, k);
	
	return 0;
}
