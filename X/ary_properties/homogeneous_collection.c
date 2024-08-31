//An array in C cannot have elements of different data types. All the elements are of the same type.


#include <stdio.h>
int main()
{
	int array[2] = {1,2};
	array[2] = "r";

	printf("Array [0]: %d\n", array[0]);
	printf("Array [1]: %d\n", array[1]);
	printf("Array [2]: %c\n", array[2]);
	return 0;
}
