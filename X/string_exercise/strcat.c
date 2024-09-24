#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter the string 1 : ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1,"\n")] = 0;
	printf("Enter the string 2 : ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn (s2 ,"\n")] = 0;
	printf("Concatenated string: %s \n", strcat(s1,s2));
	return 0;
}

