#include <stdio.h>
int main()
{
	char str1[100], str2[100];
        printf("Enter a string: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter a string: ");
	fgets(str2, sizeof(str2), stdin);	 
	if (strcmp(str1,str2) == 0)
	{
		printf("Strings are Equal..\n");
	}
	else if (strcmp (str1,str2) > 0)
	{
		printf("String 1 > String 2 \n");
	}
	else if (strcmp (str1,str2) < 0)
	{
		printf("String 1 < String 2 \n");
	}
}
