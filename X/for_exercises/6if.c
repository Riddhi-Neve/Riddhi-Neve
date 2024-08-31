#include <stdio.h>
int main()
{
int i,j,num;
printf("Enter the number : \n");
scanf("%d",&num);
for (i=1;i<=10;i++)
{
j=num*i;
printf("%d x %d = %d\n",num,i,j);
}
printf("\n");
return 0;
}
