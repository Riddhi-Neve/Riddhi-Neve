#include <stdio.h>
int main()
{
	int ary[3];
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&ary[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("The values store into the array are :%d\n",ary[i]);
	}
	for(i=3-1;i>=0;i--)
	{
		printf("The values store into the array in reverse are :%d\n",ary[i]);
	}
	return 0;
}
