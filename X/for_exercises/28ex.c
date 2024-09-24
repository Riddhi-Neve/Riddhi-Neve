// Write a C program to find the 'Perfect' numbers within a given number of ranges.
// Test Data :
// Input the starting range or number : 1
// Input the ending range of number : 50
// Expected Output :
// The Perfect numbers within the given range : 6 28




#include <stdio.h>
int main ()
{
	int mix,min,i,j;
	printf("Enter the starting range or number : ");
	scanf("%d",&min);
	printf("Enter the ending range or number : ");
	scanf("%d",&mix);
	for(i=min;i<=mix;i++)
	{
		j=1;
		int sum=0;
		while (j<i)
		{
			if (i % j == 0)
				sum= sum +j;
			j++;
		}
		if(sum == i)
			printf("%d\n",i);
	}
	return 0;
}


