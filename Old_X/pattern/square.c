#include <stdio.h>
int main()
{
	int i,j,k,rows;
	printf("Enter the rows: ");
	scanf("%d",&rows);
	for (i=rows;i>=1;i--)
	{
		for(j=rows;j>1;j--)
		{
			printf(" ");
		}
		for(k=rows;k>=1;k--)
		{
			printf(" * "  );
		}
		printf("\n");
	}
	return 0;
}
