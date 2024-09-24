//Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.


#include <stdio.h>
int main ()
{
	int i;
	int input;
	int arry[100];
	int duplicate=0;
	int index=0;
	printf("Input number(stop if you input a dupicate ): \n");
	while(!duplicate)
	{
		printf("Input number : ");
		scanf("%d",&input);
		 if (input== arry[i])
		 {
			 duplicate=1;
		 break;
		 }
		arry[index++]=input;
	}
	return 0;
}



