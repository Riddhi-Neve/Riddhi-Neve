#include <stdio.h>
int main ()
{
	int min = 100,max = 200;
	int i,sum;
	printf("Number between 100 and 200 divisiable by 9 : \n");
	for (i = min ; i <= max ; i++)
	{
		if(i % 9 == 0)
		{
			printf("%d\n", i);
			sum = sum+i;
		}
	}
	printf("The sum : %d\n", sum );
	return 0;
}



