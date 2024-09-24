//Write a C program to display a such a pattern for n rows using a number that starts with 1 and each row will have a 1 as the first and last number.
//
//  1
// 121
//12321




#include <stdio.h>
int main ()
{
	int rows;
	int j,i,k,c=1;
	printf("Enter the rows : ");
	scanf("%d",&rows);
	for (i=0; i<=rows;i++)
	{
		for (j=1; j<= rows-i; j++)
		{
			printf(" ");
		}
		for (k = 1; k<=i; k++)
		{
			printf("%d",k);
		}
		for (int n = i -1 ; n >= 1 ; n--)
		{
		printf("%d", n);
		}
		printf("\n");
 	}
	return 0;
}
