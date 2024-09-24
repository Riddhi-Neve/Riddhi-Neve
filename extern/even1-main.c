#include "even_header.h"

int main() 
{
	int a;
	printf("Enter the number: ");
	if (scanf("%d", &a) != 1) 
	{
		printf("Invalid input! Please enter a valid number.\n");
	} else {
		printf("%d\n", evenodd(a));
	}
	return 0;
}

