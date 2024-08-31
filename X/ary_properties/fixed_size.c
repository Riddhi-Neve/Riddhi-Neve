#include <stdio.h>
int main ()
{
	int array[5]= {1,2,3,4,5 };
	printf("Size of array before : %ld\n", sizeof(array) / sizeof(int));
	array[6];
	printf("Size of array after : %ld\n", sizeof(array) / sizeof(int));
	return 0;
}
