#include <stdio.h>
int main()
{
	char x;
	printf("Enter the X value :");
	scanf("%c",&x);

	(x>=48) && (x<=59) ? printf("digit\n"): printf("Not digit \n");
	return 0;
}
	
