//Implement bubble sort to sort an array of integers in ascending order.

#include <stdio.h>
int bubbleSort(int arr[] , int size)
{
    int temp;
    for(int i = 0 ; i < size - i - 1 ; i++)
    {
        for (int j = 0 ; j < size - i -1; i++)
        {
            if(arr[j] > arr [j + 1])
            {
                temp = arr[j];
                arr[j] = arr [j + 1];
                arr [ j + 1] = temp;
            }
        }
    }
}
void printArray (int arr[] , int size)
{
    for(int i =0 ; i < size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main ()
{
    int arr[5] = {64,30,54,70,50};
    int size =5;
    printf("Original array :\n");
    printArray(arr,size);
    bubbleSort (arr , size);
    printf("Sorted Array : \n");
    printArray(arr,size);
    return 0;
}

