//Implement a function that performs a linear search on an array for a given element. Return its index if found, otherwise return -1.

#include <stdio.h>
int linearSearch (int arr[], int size , int target)
{
    for (int i=0 ; i < size ; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {10,20,50,40,30};
    int target = 30;
    int index = linearSearch(arr , 5 , target);
    if (index != -1)
    {
        printf("Element %d found at index : %d\n",target, index);
    }
    else
    {
        printf("Element %d not found in the array. \n", target);
    }
    return 0;
}
