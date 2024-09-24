#include "even_header.h"
int main()
{
	int a;
	printf("Enter the number :- ");
	scanf("%d",&a);
	if(evenodd(a))
		printf("Even\n");
	else 
		printf("Odd\n");
}
