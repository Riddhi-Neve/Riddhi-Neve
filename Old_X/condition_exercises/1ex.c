//Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the 1 number : ");
	scanf("%d",&num1);
	printf("Enter the 1 number : ");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("Enter number is equal\n");
	}
	 else
	 {
		printf("Enter number is not equal\n");
	 }
	     return 0;
}
