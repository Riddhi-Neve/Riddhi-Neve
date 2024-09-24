#include <stdio.h>
int main()
{
	int num;
	printf("Input : ");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			printf("Monday \n");
			break;
		case 2:
			printf("Tuesday \n");
			break;
		case 3: 
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break ;
		case 5:
			printf("Firday\n");
			break ;
		case 6: 
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Enter the 1-7 nubmer only..\n");
	} 
	return 0;
}



