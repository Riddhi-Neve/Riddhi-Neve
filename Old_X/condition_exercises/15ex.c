// Write a C program to check whether a triangle can be formed with the given values for the angles.
// Test Data :
// 40 55 65
// Expected Output :
// The triangle is not valid.


#include <stdio.h>
int main()
{
	int numa,numb,numc;
	printf("Enter the data : ");
	scanf("%d %d %d", &numa , &numb , &numc);
	if(numa+numb+numc==180)
	{
		printf("Triangle is valid \n");
	}
	else
	{
   		printf("Triangle is not valid \n");
	}
	return 0;

}
