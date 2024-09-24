#include <stdio.h>
//#include <math.h>
int main()
{
	int mix,min;
	int num,temp,rem,sum=0;
	printf("Enter the minimun number : ");
	scanf("%d",&min);
	printf("Enter the maximun number : ");
	scanf("%d",& mix);
	for (num = min; num <=mix ; num++)
	{
		temp = num;
	//	temp/=10;
      	
	while (temp !=0 )
	{
		rem = temp % 10;
		temp= temp / 10;
		sum = sum + (rem * rem * rem );
	}
	if (sum == num)
		printf("%d \n", num);
	}
	return 0;
}

