#include <stdio.h>
int main()
{
	char num;
	printf("Input The Grade : ");
	scanf("%c",&num);
	if (num == 'E' || num == 'e')
	{
		printf("Excellent\n");
	}
	else if (num == 'V' || num == 'v')
	{
		printf("Very Good\n");
	}
	else if (num == 'G' || num == 'g')
	{
		printf("Good\n");
	}
	else if (num == 'A' || num == 'a')
	{
		printf("Average\n");
	}
	else if (num == 'F' || num == 'f')
	{
		printf("Fail\n");
	}
	else
	{
		printf("Not valid Enter the proper Grade..\n");
	}
	return 0;
}
