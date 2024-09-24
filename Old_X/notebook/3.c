#include <stdio.h>
int main()
{
	char ch;
	puts("Enter a char : ");
	ch = getchar();
	(ch>=48) && (ch <=59) ? printf("Digit\n"): printf("Not digit \n");
	return 0;
}
