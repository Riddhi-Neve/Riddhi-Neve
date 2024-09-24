#include <stdio.h>
int main()
{
	int i,j,k;
	int n;
	printf("Enter the Rows : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (k=n;k>=i;k--)
		{
			printf(" ");
		}
		for (j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
