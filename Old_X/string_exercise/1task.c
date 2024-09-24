#include <stdio.h>
int main()
{
	char str1[50] = "Riddhi";
	char str2[50] = "Neve";
	char str3[100];
	int i=0,j=0;
	while (str1[i] != '\0')
	{
		str3[i] = str1[i];
		i++;
	}
	str3[i] = ' ';
	i++;
	while (str2[j] != '\0')
	{
		str3[i] = str2 [j];
		i++;
		j++;
	}
	str3[i] = '\0';
	printf("The Add of String : %s\n",str3);
}


