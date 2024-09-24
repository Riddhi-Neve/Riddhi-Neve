#include <stdio.h>
int main()
{
	char str[100]= "Riddhi Hemkant Neve";
	char str1[100];
	char str2[100],str3[100];
	int i=0,j=0,k=0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		str1[i] = str[i];
		i++;	
	}
	str1[i] = '\0';
	if (str[i] == ' ')
	{
		i++;
	}
	while (str[i] != ' ' && str[i] != '\0')
	{
		str2[k] = str[i];
		i++;	
		k++;
	}
	str2[i] = '\0';
	if (str[i] == ' ')
	{
		i++;
	}


	while (str[i] != '\0')
	{
		str3[j] = str[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	printf("String 1 = %s\n", str1);
	printf("String 2 = %s\n", str2);
	printf("String 3 = %s\n", str3);
}
