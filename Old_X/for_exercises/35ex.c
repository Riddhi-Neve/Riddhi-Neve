//Write a program in C to display the first n terms of the Fibonacci series.
//Fibonacci series 0 1 2 3 5 8 13 .....
//Test Data :
//Input number of terms to display : 10
//Expected Output :
//Here is the Fibonacci series upto to 10 terms :
//0 1 1 2 3 5 8 13 21 34




#include <stdio.h>
int main ()
{
	int num,num1 = 0,num2 = 1 ,temp,i;
	printf("Input number of terms to display : ");
	scanf("%d",&num);
	printf("Here is the Fibonacci series Upto %d terms : \n",num);
	for (i=1;i<=num;i++)
	{
		temp = num1+num2;
		printf("%d\n",temp);
		num1 = num2;
		num2 = temp;
	}
	return 0;
}


