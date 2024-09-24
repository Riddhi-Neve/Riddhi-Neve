#include <stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	char len =0;
	printf("Enter a string: ");
	fgets(str1, sizeof(str1), stdin);
	while (str1[len] != '\0')
	{
		len++;
	}
	for (int i = 0; i < len;i++)
	{
		str2[i] = str1[len - 1 - i];	
	}
	str2[len] = '\0';
	printf("The Reversed string is : %s\n",str2);
}

