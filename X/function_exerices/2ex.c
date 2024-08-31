#include <stdio.h>
int square()
{
	int num;
	printf("Enter the input for square : ");
	scanf("%d",&num);
	int squ=1;
	squ=num*num;
	return squ;
}


int main ()
{
	int square();

	printf("\nThe square of enter value is :%d \n",square());
}
