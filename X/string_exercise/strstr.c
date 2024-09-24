#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Riddhi";
	char s2[] = "h";
	char *p;
	p = strstr(s1,s2);
	if (p)
	{
		printf("String Found \n");
		printf("First Occurrence of string '%s' in '%s' is '%s'\n",s2,s1,p);

	}
	else
	{
		printf("String not found \n");
	}
}
