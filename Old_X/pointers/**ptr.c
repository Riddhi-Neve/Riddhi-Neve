#include <stdio.h>
int main()
{
int a=10;
int *b= &a;
int **c= &b;
printf("a %d\n",a);
printf("*b %d\n",*b);
printf("**c %d\n",**c);
printf("c address value is %p\n",c);
printf("b address value is %p\n",b);

}
