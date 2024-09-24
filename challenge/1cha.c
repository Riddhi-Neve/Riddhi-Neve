//Guess the number Game.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#define ANS 47
int main()
{
	int ANS;
	srand(time(0));
//	printf("Rand is : %d\n", rand());
	ANS = rand() % 101;
	int num;
	int flag =10;
	printf("Enter the number : ");
	for (int i=0;i<10 ;i++)
	{
	flag--;
	scanf("%d",&num);

	if (num > ANS)
	{
		printf(" TOO HIGH %d chances \n", flag);

	}
	else if (num < ANS)
	{
		 printf(" TOO LOW %d chance \n", flag);
	}
	else if (num == ANS)
	{
		printf("You got it...!!! %d tries \n", flag);
		break;
	}
	}
	return 0;

}


