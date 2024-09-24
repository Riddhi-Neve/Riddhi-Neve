#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter the string : ");
	fgets(s1 , sizeof(s1), stdin);
	printf("String 1: %s\n",s1);
	strcpy(s2 , s1);
	printf("Copy string 2 : %s\n", strcpy(s1,s2));
}
