//Write a program to calculate the sum of all elements in an array.

#include <stdio.h>
int main()
{
    int ary[5] = {10,20,30,40,50};
    int i,sum = 0;
    for (i = 0 ; i < 5 ; i++)
    {
        printf("Arrays %d : %d ",i , ary[i]);
        sum = sum+ary[i];
    }
    printf("\nSum of all arrays : %d\n",sum);
}

