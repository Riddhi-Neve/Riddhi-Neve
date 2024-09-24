//Write a program in C to display a pattern like a diamond.
//
//    *
//   *** 
//  *****
// *******
//********* 
// *******
//  *****
//   ***
//    * 




#include <stdio.h>
int main ()
{
	int rows;
	int j,i,k;
	printf("Enter the rows : ");
	scanf("%d",&rows);
	for (i=0; i<=rows;i++)
	{
		for (j=1; j<= rows-i; j++)
		{
			printf(" ");
		}
		for (k = 1; k<=i-1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(i = rows-1; i>= 1; i--)
	{	
		for (j=1; j<= rows-i ; j++)
		{
			printf(" ");
		}
		for (k=1; k<= i-1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}


}
