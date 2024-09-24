 #include <stdio.h>
int funMaxMin (int ary[] , int size , int *min , int *max)
{
    *max = ary[0];
    *min = ary[0];
    for(int i = 1 ; i < size ; i++)
    {
        if(ary[i] > *max)
        {
            *max = ary[i];
        }
        if(ary[i] < *min)
        { 
            *min = ary[i];
        }
    }
}

int main()
{
    int ary[5] = {10,20,5,40,60};
    int min,max;
    funMaxMin(ary , 5 , &max ,&min);
    printf("Maximun element : %d\n", max);
    printf("Minimun element : %d\n", min);
}
