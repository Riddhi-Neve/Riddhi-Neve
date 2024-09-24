#include <stdio.h>
int main()
{
	int i,num,even;
	printf("Enter the number of terms : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("The even number is : %d \n",2*i);
		even+=2*i;
	}
	printf("Sum of even number is : %d\n ",even);
	return 0;
}
