// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
// Test Data : -5
// Expected Output :
// The value of n = -1



#include <stdio.h>
int main()
{
	int n,m;
	printf("Enter the Input : ");
	scanf("%d",&m);
	if(m!=0)
	{
		if(m>0)
		{
			m=1;
		}
		else
		{
			n=-1;
		}
		}
	else 
	{
		n=0;
	}
	printf("The value of n= %d\n",n);
	printf("The value of m= %d\n",m);
	return 0;
}
