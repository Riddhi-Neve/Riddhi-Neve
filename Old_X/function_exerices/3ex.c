#include <stdio.h>
int swap(int *num1 , int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}

int main()
{
	int num1;
	int num2;
       printf("Enter the 1st number : ");
       scanf("%d",&num1);
       printf("\nEnter the 2nd number : ");
       scanf("%d",&num2);
	printf("Before swapping num1 = %d num2 = %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swapping num1 = %d num2 = %d\n",num1,num2);
	return 0;
}

