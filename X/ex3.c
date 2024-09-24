#include <stdio.h>
#define bool int;
#define true 1;
#define false 0;
int main()
{
	int num1, num2,sum;
	printf("Enter the number : ");
	scanf("%d", &num1);
	printf("Enter the number : ");
	scanf("%d", &num2);
	sum = num1==30 || num2==30 || (num1+num2 ==30);
	printf("%d\n", sum);
}
