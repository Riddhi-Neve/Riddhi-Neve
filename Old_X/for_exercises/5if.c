#include <stdio.h>
int main()
{
	int i,cube;
	printf("Input number of terms: \n");
	scanf("%d",&cube);
	for(i=1;i<=cube;i++)
	{
		printf("The number is : %d and the cube of the %d is :%d\n",i,i,i*i*i);
	}
	printf("\n");
	return 0;
}
