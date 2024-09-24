//- Write a program that declares an integer variable, a pointer to that integer, and initializes the pointer to point to the integer variable. Modify the integer value through the pointer and print both the variable and the pointer’s dereferenced value.

#include <stdio.h>
int main()
{
	int variable=10;
	int *pointer = &variable;
	printf("Before variable: %d \t Before pointer : %d\n",variable,*pointer);
	*pointer = 20;
	printf("Before variable: %d \t Before pointer : %d\n",variable,*pointer);
	return 0;
}
