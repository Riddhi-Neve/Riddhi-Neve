#include <stdio.h>
int main()
{
	int ary[100];
	int i,k;
	for (i=0;i<3;i++)
	{
		scanf("%d",&ary[i]);
	}
	for (i=0;i<3;i++)
	{
		k+=ary[i];
		printf("Element of array :%d\n",ary[i]);
	}
	printf("Sum of all elements stored in the array is : %d\n",k);
	return 0;
}
