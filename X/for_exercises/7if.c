#include <stdio.h>
int main()
{
	int i,j=0,num,var;
	printf("Input upto the table number starting:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		j=i*num;
		printf("%d x %d = %d\n",i,num,j);
	}
	printf("\n");
	return 0;
}
