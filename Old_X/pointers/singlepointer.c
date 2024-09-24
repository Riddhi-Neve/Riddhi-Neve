#include <stdio.h>
int main(){
int a=22;
int *b;
 b = &a;
printf("value of pointer is %p\n",b);
printf("value of *b is%d\n",*b);

printf("value od a is %d\n",a);

printf("value of a address is %d\n",a);
}
