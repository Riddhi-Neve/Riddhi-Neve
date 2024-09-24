#include <stdio.h>
int rows(int i , int num)
{
	printf("#");
	for (i = 0 ; i < num ; i++)
	{
		printf("#");
	}
	  printf("#");
	  printf("\n");
}

int main()
{

	int num,i;
	printf("Enter the rows : ");
	scanf("%d",&num);
	rows(i,num);
	printf("#");
	for (i= num ; i >=1 ; i--)
	{
		printf("%d",i);
	}
	 printf("#\n");
	 rows(i,num);
}
