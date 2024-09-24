#include <stdio.h>
int main()
{
	int num,num1,opt;
	printf("Enter the 1 input : ");
	scanf("%d",&num);
	printf("Enter the 2 input : ");
	scanf("%d",&num1);
	printf("Choose your option :\n1)Addition\n2)Subtraction\n3) Multiplication\n4)division\n");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1:
			printf("The Addition of %d and %d is :- %d\n", num,num1,num+num1);
			break;
		case 2: 
			printf("The Subtraction of %d and %d is :- %d\n",num,num1,num-num1);
			break;
		case 3:
			printf("The Multiplication of %d and %d is :- %d\n",num,num1,num*num1);
			break;
		case 4:
			printf("The Division of %d and %d is :- %d\n",num,num1,num/num1);
		case 5:
			break;
		default:
			printf("Enter the Correct Option.. \n");
	}
	return 0;
}



