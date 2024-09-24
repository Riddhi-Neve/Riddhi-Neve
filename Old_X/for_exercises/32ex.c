//Write a C program to determine whether a given number is prime or not.
// Test Data :
// Input a number: 13
// Expected Output :
// 13 is a prime number.



#include <stdio.h>
int main()
{
	int i,num,count=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	for (i=2; i<num/2 ; i++)
	{
		if(num % i == 0)
		{
			count ++;
		break;
		}
	}
	if (count == 0 && num != 1)
		printf("%d is a Prime number\n",num);
	else 
		printf("%d Not a prime number \n",num);
	
}
