#include <stdio.h>
int main (){
int i,j,row=4,n;

for(i=1;i<=row;i++)
{
for(j=1;j<=  i;j++)
{
printf("*");
}
printf("\n");
}
for(i=1;i<=row;i++)
{
	for(j=1;j<=  i;j++)
	{
		printf("%d",n++);
	}
	printf("\n");
}
for(i=1;i<=row;i++)
{
	for(j=1;j<=  i;j++)
	{
		printf(" %d",j);
	}
	printf("\n");
}
for(i=1;i<=row;i++)
{
	for(j=1;j<=  i;j++)
	{
		printf(" %d",i);
	}
	printf("\n");
}
for(i=1;i<=row;i++)
{
	char ch=64;
	for(j=1;j<=i;j++){

		printf(" %c",ch+i);
	}
	printf("\n");
}
char cha=64;
for(i=1;i<=row;i++)
{
	for(j=1;j<=  i;j++)
	{
		printf(" %c",cha+j);
	}
	printf("\n");
}

}



