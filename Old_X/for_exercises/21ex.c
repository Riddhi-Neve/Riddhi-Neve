#include <stdio.h>
int main()
{
	int i,num,terms=9;
	int sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum+=terms;
		printf("The series number is: %d \n",terms);
		terms=terms*10+9;
	}
	printf("Total number os series is : %d \n",sum);
return 0;
}

