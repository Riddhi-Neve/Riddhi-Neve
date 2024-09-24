// Write a C program to find the largest of three numbers.
// Test Data : 12 25 52
// Expected Output :
// 1st Number = 12,        2nd Number = 25,        3rd Number = 52
// The 3rd Number is the greatest among three


#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the 1 number : ");
	scanf("%d",&a);
	printf("Enter the 2 number : ");
	scanf("%d",&b);
	printf("Enter the 3 number : ");
	scanf("%d", &c);
	if (a>b && a>c)
	{
		printf("The 1st Number is the greatest among three \n");
	}
	if(b>a && b>c)
	{
		printf("The 2nd Number is the greatest among three \n");
	}
	if (c>a && c>b)
	{
		printf("The 3rd Number is the greatest among three \n");
	}
	return 0;
}

