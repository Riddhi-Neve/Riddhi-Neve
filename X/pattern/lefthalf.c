#include <stdio.h>
int main ()
{
int i,j,k,n=4;
for(i=1;i<n;i++)
{
for (k=0;k<n-i-1;k++)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}

for(i=1;i<n;i++)
{
	for (k=0;k<n-i-1;k++)
	{
		printf(" ");
	}
	for (j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}

for(i=1;i<n;i++)
{
	for (k=0;k<n-i-1;k++)
	{
		printf(" ");
	}
	for (j=1;j<=i;j++)
	{
		printf("%d",i);
	}
	printf("\n");
}

for(i=1;i<n;i++)
{
	char ch=64;
	for (k=0;k<n-i-1;k++)
	{
		printf(" ");
	}
	for (j=1;j<=i;j++)
	{
		printf("%c",ch+i);
	}
	printf("\n");
}

for(i=1;i<n;i++)
{
	char cha=64;
	for (k=0;k<n-i-1;k++)
	{
		printf(" ");
	}
	for (j=1;j<=i;j++)
	{
		printf("%c",cha +j);
	}
	printf("\n");
}

}
