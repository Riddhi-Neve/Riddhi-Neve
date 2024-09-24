//Write a C program to check whether a number is a palindrome or not.
//Test Data :
//Input a number: 121
//Expected Output :
//121 is a palindrome number.



#include <stdio.h>
int main()
{
	int num,r,sum=0,t;
	printf("Input The number : ");
	scanf("%d",&num);
	for (t = num ; num != 0 ; num = num/10)
	{
		r = num % 10;
		sum = sum * 10 + r;
	}
	if (t == sum)
		printf("%d is a palindrome Numnber\n",t);
	else
		printf("%d is a not palindrone number\n", t);
}

	
