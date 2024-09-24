//Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>
int main ()
{
	char string[100];
	int l=0;
	printf("Enter Input number: ");
	fgets (string , sizeof string , stdin );
	while (string[l]!='\0')
	{
		printf("%c ",string[l]);
		l++;
	}
	return 0;
}
