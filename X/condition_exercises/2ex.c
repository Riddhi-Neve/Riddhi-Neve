//Write a C program to check whether a given number is even or odd.

#include <stdio.h>
int main ()
{
	int num1;
	printf("Enter the number : ");
	scanf("%d",&num1);
	if(num1%2==0)
	{
		printf("Enter number is even\n");
	}
	else
	{
		 printf("Enter number is odd\n");
	}
	return 0;
}
