// Create an array of 5 integers. Use a pointer to iterate through the array, adding 1 to each element. Print the array elements before and after the addition to verify the changes.

#include <stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr;
	*ptr = &arr[5];
	printf("Pointer array : %d\n",*ptr);
	*ptr++;
	printf("Pointer array : %d\n",*ptr);
	return 0;
}
