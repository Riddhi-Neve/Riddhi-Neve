#include <stdio.h>
int main()
{
	int ary[100];
	int ary1[100];
	int i,num;
	printf("Enter the array :");
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&ary[i]);
	}
	for (i=0;i<num;i++)
	{
		ary1[i]=ary[i];
		printf("The elements stored in the first array are :%d \n",ary[i]);
	}
	for(i=0;i<num;i++)
	{
	printf("The elements copied into the second array are : %d \n",ary1[i]);
	}
	return 0;
}
