#include <stdio.h>
int main()
{
	int i;
	char chr[5];
	for(i=0;i<5;i++)
	{
		scanf("%c",&chr[i]);
	}
	chr[3]='g';
	for(i=0;i<5;i++)
	{
		printf("Charater array %c\n",chr[i]);
	}
	return 0;
}
