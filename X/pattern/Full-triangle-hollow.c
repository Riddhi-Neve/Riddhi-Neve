#include <stdio.h>
int main()
{
	int i,j,k,rows;
	printf("Enter the rows: ");
	scanf("%d",&rows);
	for (i=0;i<rows;i++)
	{
		for(j=0;j<2*(rows-i);j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i+1;k++)
		{
			if (k==0 || k==2*i || i==rows-1)
			{
				printf(" *");
  			}
   			else
  			{
 				printf("  ");
			}
     		}
		printf("\n");
	}
	return 0;
}
