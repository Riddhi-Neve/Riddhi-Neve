#include <stdio.h>
int main()
{
	int num;
	printf("Input : ");
	scanf("%d",&num);
	switch (num)
	{

		case 1:
			printf("January \n");
			printf("Month have 31 days\n");
			break;
		case 2:
			printf("February \n");
			printf("Month have 29 days\n");
			break;
		case 3: 
			printf("March\n");
			printf("Month have 31 days\n");
			break;
		case 4:
			printf("April\n");
		        printf("Month have 30 days\n");	
			break ;
		case 5:
			printf("May \n");
			 printf("Month have 31 days\n");	
			break ;
		case 6: 
			printf("June\n");
			 printf("Month have 30 days\n");
			break;
		case 7:
			printf("July\n");
			 printf("Month have 31 days\n");
			break;
		case 8:
			printf("August \n");
			 printf("Month have 31 days\n");
			break;
		case 9: 
			printf("September\n");
			 printf("Month have 30 days\n");
			break;
		case 10: 
			printf("October\n");
			 printf("Month have 31 days\n");
			break;
		case 11:
			printf("November\n");
			 printf("Month have 30 days\n");
			break;
		case 12:
			printf("December\n");
			 printf("Month have 31 days\n");
			break;
		default:
			printf("Enter the 1 - 12 digits...\n");
	}
	
	return 0;
}



