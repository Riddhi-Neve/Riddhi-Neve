#include <stdio.h>
int main()
{
	int i,j,row,k=1;
	printf("ENTER THE ROWS: ");
	scanf("%d",&row);
	for(i=1;i<=row ;i++)
	{
		for(j=1;j<=i;j++) 
		{
			printf("%d",i);
		}
		printf("\n");
	}
	

	printf("ENTER THE ROWS: ");
	scanf("%d",&row);
	for(i=1;i<=row ;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);													}
		printf("\n");
	}
	return 0;
}
