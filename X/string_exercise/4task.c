#include <stdio.h>
int main()
{
	char str[100];
	char str1[100];
	int i=0;
	printf("Enter the name : ");
	fgets (str, sizeof(str), stdin);
	while (str[i] !='\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str1[i] = str[i] - 32;
		}
		else
		{
			str1[i] = str[i];
		}
		i++;
	}
	str1[i] = '\0';
	printf("Upper case string : %s \n", str1);
	return 0;
}
