#include <stdio.h>
int main()
{
    int num,arr[50], i;
    printf("Input the size of array : ");
    scanf("%d,", &num);
    for (i=0; i<num; i++)
    {
        printf("Element-%d :- ", i);
        scanf("%d",&arr[i]);
    }
    printf("{");
    for (i=0; i<num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    for (i = 0 ; i <num ; i++)
    {
        

}

