#include <stdio.h>
int main ()
{
	int num = 1;
	int even = 0;
	int odd = 0;
	do
	{ 
		if(num%2==0)
		{
			even+=num;
		}
		else
		{
			odd+=num;
		}
		num++;
	}
	while(num<=50);
	{
		printf("The sum of Even number is :%d\n",even);
		printf("The sum of Odd number is  :%d\n",odd);
	}
	return 0;
}
