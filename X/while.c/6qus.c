#include <stdio.h>
int main()
{
	int n;
	int m=1;
printf("Enter the integer value:\n");
scanf("%d",&n);

while(n<0)
{
	printf("input enter a negative value %d \n",n);
	return 1;
}
while(n>0)
{
 m*=n;
 n--;
}
printf("the factorial value of this is %d\n",m);
 return 0;
 }

