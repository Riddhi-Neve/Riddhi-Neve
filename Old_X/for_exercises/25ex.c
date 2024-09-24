#include <stdio.h>
int main ()
{
	int sum=0,temp;
	int i,n;
	printf("Enter the number of terms :");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		sum=i*i;
		printf("Square of nubmer :%d\n",sum);
		temp+=sum;		
	}
	printf("The sum of all Number %d\n",temp);
	return 0;

}

