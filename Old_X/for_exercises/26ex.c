#include <stdio.h>
int main()
{
int sum=0,terms=1;
int i,n;
printf("Enter the number of terms :");
scanf("%d",&n);
for (i=0;i<n;i++)
{
	sum+=terms;
	printf("Series of number :%d \n",terms );
	terms = terms*10 +1;
}
printf("Sum of all series : %d\n",sum);
return 0;
}
