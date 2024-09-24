#include <stdio.h>
int main()
{
	int i,j,k;
	int n=6;
	int m=4;
	for (i=1;i<=n;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf(" ");
		}
		for (j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
