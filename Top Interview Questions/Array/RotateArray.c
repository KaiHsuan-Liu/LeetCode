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
/*************************************************************************/
void reverseArray(int* nums, int i, int j)
{
	int tmp = 0;
	while (i < j) {
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
		i++;
		j--;
	}

}
void rotateArray2(int* nums, int numsSize, int k)	
{
	k = k % numsSize;
	reverseArray(nums, 0, numsSize - k - 1);
	reverseArray(nums, numsSize - k, numsSize - 1);
	reverseArray(nums, 0, numsSize - 1);

	for (int i = 0; i < numsSize; i++)
	{
		printf("%d\t", nums[i]);
	}
}
int main(void)
{
	//4 3 2 1, 7 6 5 -> 5 6 7 1 2 3 4 
	int nums[] = {1, 2, 3, 4, 5, 6, 7};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int k = 3;
	//rotateArray1(nums, numsSize, k);
	rotateArray2(nums, numsSize, k);
	
	return 0;
}
