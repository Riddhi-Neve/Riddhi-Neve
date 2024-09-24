// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
// Test Data :
// 50 50 60
// Expected Output :
// This is an isosceles triangle.


#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number1 : ");
	scanf("%d", &a);
	printf("enter the number2 : ");
	scanf("%d", &b);
	printf("enter the number3 : ");
	scanf("%d", &c);
	if((a+b>c) && (a+c>b) && (b+c>a))
	{
		if (a==c && a==b)
		{
			printf("Equilateral triangle");
		}
		else if (a==b || a==c || b==c)
		{
			printf("Isosceles Triangle");
		}
		else
		{
			printf("Scelene Triangle");
		}
	}
	printf("\n");
      	return 0;
} 
