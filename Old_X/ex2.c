#include <stdio.h>
int main()
{
	int num, num1 = 51,var1;
	printf("Enter the number : ");
	scanf("%d", &num);
	var1 = num>=num1 ? (num - num1) *3 : num1 - num;
	printf("%d\n",var1);
}







