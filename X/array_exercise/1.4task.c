#include <stdio.h>
int main ()
{
    int arr[9],i,sum1=0;
    printf("Enter the array :- \n");
    for(i = 0 ; i < 9 ; i++)
    {
        printf("Array element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array :- { ");
    for (i = 0 ; i < 9 ; i++)
    {
        printf(" %d ",arr[i]);    
    }
    printf(" }\n");
    printf("addition of first 4 element : {");
    for (i = 0 ; i < 4 ; i++)
    {
        arr[i]+=arr[4];
        printf(" %d ",arr[i]);
    }
    printf("}");
    printf("\nSubtraction of last 4 element : {");
    for(i = 5 ; i < 9; i++)
    {
        sum1 = arr[i]-arr[4];
            printf(" %d ",sum1);
    }
    printf("}\n");
       
}




