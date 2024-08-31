#include <stdio.h>
int main()
{
	int i,num,m=1;
	printf("Enter the input : ");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		m*=i;
	}
	printf("The factorial of this %d is  %d\n",num,m);
	return 0;
}
