// Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
// Test Data : 21
// Expected Output :
// Congratulation! You are eligible for casting your vote.

#include <stdio.h>
int main ()
{
	int num;
	printf("Enter the age : ");
	scanf("%d",&num);
	if(num<18)
	{
		printf("You are not eligible for casting your vote !!\n");
	}
	else
	{
		printf("Congratulaions !! you are eligible for casting your vote.\n");
	}
	return 0;
}
