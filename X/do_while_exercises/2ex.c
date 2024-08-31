#include <stdio.h>
int main()
{
	int num,sum=0;
	do
	{
		printf("Enter the input tp stop by entering 0 :");
		scanf("%d",&num);
		if(num>=0)
		{
			sum+=num;
		}
		else if(num<0)
		{
			printf("This value is negative...");
		}
	}
	while(num !=0);
	{
		printf("Sum of all positive input : %d\n",sum);
	}
	return 0;
}

