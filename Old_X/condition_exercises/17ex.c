//Write a C program to check whether an alphabet is a vowel or a consonant.
//Test Data :
//k
//Expected Output :
//The alphabet is a consonant.


#include <stdio.h>
int main()
{
	char num;
//	char n = {'a','e','i','o','u'};
//	char m = {'A','E','I','O','U'};
	printf("Enter the Alphabet : ");
	scanf("%c", &num);
	if(num== 'a' || num == 'e'|| num == 'i' || num =='o' || num== 'u'|| num =='A' || num =='E'|| num =='I' || num =='O' || num =='U')
	{
		printf("These are the vowel ");
	}
	else
	{
  		printf("These are the Consonant ");
	}
	return 0;
}              
