#include <stdio.h>
int main()
{
	int num;
	do
       	{
		printf("order wise : %d\n",num);
		num++;
	}
	while (num<=10);

	do
	{
		num--;
		printf("Reverse : %d \n",num);
	}
	while (num>1);
	return 0;
}

