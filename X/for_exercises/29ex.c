//Write a C program to check whether a given number is an Armstrong number or not.
//Test Data :
//Input a number: 153
//Expected Output :
//153 is an Armstrong number.



#include <stdio.h>
#include <math.h>
int main()
{
	int num,temp,rem,sum=0,n=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for (temp = num; temp !=0 ; n++)
	{
		temp/=10;
	}
	for (temp = num ; temp !=0 ; temp /= 10)
	{
		rem = temp % 10;
		sum +=pow(rem,n);
	}
	if (sum == num)
	{
		printf("%d is an Armstrong Number. \n", num);
	}
	else 
	{
		printf("%d is an Not Armstrong Number. \n", num);
	}
	return 0;
}



