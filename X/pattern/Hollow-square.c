#include <stdio.h>
int main ()
{
	int num,i,j;
	printf("Enter the row : ");
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		for (j=1;j<num;j++)
		{
			if (i>0 && i<num-1 && j>1 && j<num-1)
			{
				printf("  ");
			}
			else 
			{
			printf(" %d",j);
			}
		}
		printf("\n");
	}
	return 0;
}

