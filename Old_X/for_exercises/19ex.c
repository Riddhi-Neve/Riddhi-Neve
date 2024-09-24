#include <stdio.h>
int main()
{
	int i,num;
	float s;
	printf("Enter the number:\n ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i<num)
		{
			printf("1/%d + ",i);
			s+=1/(float)i;
		}
		if(i==num)
		{
			printf("1/%d ",i);
			s+=1/(float)i;
		}
//		printf("Sum of series upto 5 terms :%f ",s);
	}
	printf("\n Sum of series upto 5 terms :%f \n",s);
	return 0;
}
