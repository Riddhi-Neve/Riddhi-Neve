//Write a C program to display Pascal's triangle.
// Test Data :
// Input number of rows: 5
// Expected Output :
//
//         1
//       1   1 
//     1   2   1 
//    1   3   3   1
//  1   4   6   4   1 
	
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
		for (k = 0; k<=i; k++)
		{
			if (k == 0 || i == 0)
				c=1;
			else
				c=c*(i-k+1)/k;
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
}
