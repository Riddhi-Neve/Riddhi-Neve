#include <stdio.h>
int main ()
{
    int arr[10], i,sum=0,sum1=0;
    printf("Enter the array :-\n");
   for( i=0 ; i < 10 ; i++ )
    {
        printf("Array- %d: ", i);
        scanf("%d",&arr[i]);
    }
   printf("{");
   for(i = 0 ; i < 10 ; i++)
   {
    printf(" %d ",arr[i]);
   }
    printf("}\n");
    printf("Even number :-{");
    for (i=0 ; i <10 ; i++)
    {
        if(arr[i]%2 == 0)
        {
            printf(" %d ",arr[i]);
            sum+=arr[i];
        }

    }
    printf("}");
    printf("\nSum of Even :- { %d }",sum);
    printf("\nOdd Number :- {");
    for (i = 0 ; i < 10 ; i ++)
    {
        if(arr[i]%2 != 0)
        {
            printf(" %d ",arr[i]);
            sum1+=arr[i];
        }

    }
    printf("}");
    printf("\nSum of Odd :- { %d }\n",sum1);
}
