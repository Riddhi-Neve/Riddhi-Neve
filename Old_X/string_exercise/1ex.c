// Write a program in C to input a string and print it.


#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter the input string : ");
	fgets(str,sizeof str,stdin );
	printf("The string you enter is :%s \n",str);
	return 0;
}
