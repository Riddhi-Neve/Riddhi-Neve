//Write a program in C to display a given number in reverse order.
//Test Data :
//Input a number: 12345
//Expected Output :
//The number in reverse order is : 54321



#include <stdio.h>
int main ()
{
	int r,sum=0,num,i;
	printf("Enter the number : ");
	scanf("%d",&num);
	for (i = num ; num != 0 ;num = num/10)
	{
		r = num%10;
		sum = sum * 10 + r;
	}
	printf("%d\n",sum);
}




