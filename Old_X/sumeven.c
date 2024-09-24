#include <stdio.h>

int main() {
int i,n,j=0;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
for (i=1;i<=n;i++)
	{
	printf("EVEN NUMBERS %d \n",2*i);
	j+=2*i;
	}
	printf("SUM OF EVEN NUMBER %d\n",j);
return 0;
}
