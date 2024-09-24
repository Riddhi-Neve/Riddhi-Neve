#include <stdio.h>
int main()
{
    int num , reverse = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int original = num;
    while (num != 0)
    {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if (original == reverse)
    {
        printf(" %d is a palindrome..\n",original);
    }
    else 
    {
        printf(" %d is a not a palindrome..\n",original);
    }
}
