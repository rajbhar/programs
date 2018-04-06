#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int *, int);

void main()
{
	printf("** Detect Duplicate Demo **\n");

	int nums[] = { 1, 2, 3, 4, 5, 7 };
	bool result;


	result = containsDuplicate(nums, 6);

	printf(" Array has %s elements\n", result == true? "duplicate" : "no duplicate");
}

bool containsDuplicate(int* nums, int numsSize) {
	int i, j =0;

	for (j = 0; j < numsSize -1; j++) {
		for (i = j; i < numsSize -1; i++) {
			if (nums[j] == nums[i+1]) return true;
						     }
	}

	return false;
}

