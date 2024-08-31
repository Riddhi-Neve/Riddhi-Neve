#include <stdio.h>
int main()
{
	int ary[10];
	int i;
	for (i=0;i<10;i++)
	{
		scanf("%d",&ary[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("Element in array are : %d\n",ary[i]);
	}
	return 0;
}
