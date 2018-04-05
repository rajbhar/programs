#include <stdio.h>

void rotate_array(int *, int, int);
void print_array(int *, int);

void main()
{
	printf("** Rotate array right demo **\n");

	int nums[] = { 1, 2, 3, 4, 5 };
	int k;

	printf("Enter position to shift\n");
	scanf("%d", &k);

	if (k > sizeof(nums) / sizeof(nums[0])) {
		printf("Invalid size\n");
		return;
	}

	rotate_array(nums, 5, k);
}

void rotate_array(int *nums, int numsSize, int k)
{
	int i = 0;

	printf("Original array is : \n");
	print_array(nums, numsSize);

	if (numsSize == 1 || k == 0) return;

	int temp;

	for (int j = 0; j < k; j++ ) {

		temp = nums[numsSize -1];

		for (i = 0 ; i < numsSize -1; i++) {
			nums[numsSize -1 -i ] = nums[numsSize -2 -i];
		}
		nums[0] = temp;
	}

	printf("Final array is : \n");
	print_array(nums, numsSize);
}

void print_array(int *nums, int size)
{
	for (int i = 0; i < size; i++)
		printf("%2d ", nums[i]);

	printf("\n");
}
