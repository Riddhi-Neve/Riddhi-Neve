//Write a C program to check whether a character is an alphabet, digit or special character.
//Test Data :
//@
//Expected Output :
//This is a special character.


#include <stdio.h>
int main()
{
       	char str[200];
       	char num;
	printf("Enter the input : ");
       	scanf("%s",&num);
	if (num >= 97 && num <= 122)
	{
		printf("This is a lower Aplabate ");
	}
	else if (num >= 65 && num <= 90)
	{
		printf("This is a Upper Aplabate ");
	}
	else if (num >= 48 && num <= 57)
	{
		printf("This is a number ");
	}
       	else
	{
	      	printf("This is a special character ");
	}
	return 0;
}
