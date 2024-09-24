#include <stdio.h>
#include <string.h>
int main ()
{
	char s1[100],s2[200];
	printf("Enter the string : ");
	fgets(s1 , sizeof(s1), stdin);
//	strncpy (s2 , s1, 5);
	printf("The copy string is this %s\n",strncpy(s2,s1,5));
}
