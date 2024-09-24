// Write a C program to check whether a given number is a 'Perfect' number or not.
// Test Data :
// Input the number : 56
// Expected Output :
// The positive divisor : 1 2 4 7 8 14 28
// The sum of the divisor is : 64
// So, the number is not perfect.


#include <stdio.h>
int main()
{
	int num,add=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for (int i=1; i<num;i++)
	{
		if (num%i==0)
		{
			 add=add+i;
			printf("%d \t",i);
		}
	}
		printf("\n The sum of the divisors is : %d \n",add);
		if (add==num)
		{
			printf("The number is a perfect..\n");
		}
		else 
		{
			printf("The number is not perfect..\n");
		}
	return 0;
}
