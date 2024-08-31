//Write a program in C to find the length of a string without using library functions.


#include <stdio.h>
#include <string.h>
int main ()
{
	char srt[100];
	printf("Input string : ");
	fgets(srt,sizeof srt,stdin );
	int n=strlen (srt);
	printf("Length of the string is : %d\n",n);
	return 0;
}

