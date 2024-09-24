#include <stdio.h>
int main()
{
  int i,c=0;
  float d;
	for (i=1;i<=10;i++)
	{
		c+=i;
		d=c/10.0;
		printf("%d \n",i);
	}
	printf("%d \n",c);
	printf("%f \n",d);
	return 0;
}
