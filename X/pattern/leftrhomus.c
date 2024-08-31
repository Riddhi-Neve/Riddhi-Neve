#include <stdio.h>
int main()
{
int i,j,k;
int n=4;
for (i=1;i<=n;i++)
{
for (k=4;k>=i;k--)
{
printf(".");
}
for (j=1;j<=n;j++)
{
printf("*");
}
printf("\n");
}


}
