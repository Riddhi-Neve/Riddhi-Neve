#include <stdio.h>
int main ()
{
	int sum;
	int num;
	do
	{
		printf("Enter the Integer number negative number will stop the series: ");
		scanf("%d",&num);
		if(num>=0)
		{
			sum+=num;
		}
	}
	while (num>=0);
	{
	printf("Sum of all the positive number:%d\n",sum);
	}
	return 0;
}
