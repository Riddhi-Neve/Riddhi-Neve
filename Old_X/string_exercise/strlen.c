#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100];
	printf("Enter the string : ");
	fgets(s1 , sizeof(s1), stdin);
	int len = strlen(s1);
	printf("Length of the string is %d \n",len);
}
