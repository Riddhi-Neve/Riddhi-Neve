#include <stdio.h>

int main()
{
	int i,d,j;
	int sum=0;
	printf("ENTER THE NUMBER:");
	scanf("%d",&d);
	for (i=1;i<=d;i++)
	{
		j=2*i-1;
		printf(" %d\n",j);
		sum+=j;
	}
	printf(" %d\n",sum);
	return 0;
}
