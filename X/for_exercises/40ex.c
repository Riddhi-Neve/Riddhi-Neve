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
			printf("  ");
		}
		for (k = 1; k<=i; k++)
		{
			printf("%c ",k+64);
		}
		for (int n = i -1 ; n >= 1 ; n--)
		{
			printf("%c ", n+64);
		}
		printf("\n");
	}
	return 0;
}
