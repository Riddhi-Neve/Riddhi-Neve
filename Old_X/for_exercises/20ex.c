#include <stdio.h>
int main()
{
	int i,j,k;
	int row;
	printf("Enter the rows: \n");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=1;j<row-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
