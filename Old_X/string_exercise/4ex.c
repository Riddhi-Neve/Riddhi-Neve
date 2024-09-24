#include <stdio.h>
#include <string.h>
int main ()
{
	char string[100];
	int i,l;
	printf("Enter the Input string : ");
	fgets(string , sizeof string , stdin );
	l=strlen (string);
	for (i=l-1;i>=0;i--)
	{
		printf(" %c ",string[i]);
	}
	printf("\n");
	return 0;
}

