#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int ans = rand() %20+1;
    int num,flag=10;
    while(flag != 0)
    {
    printf("Enter the number 1 to 20 : ");
    scanf("%d",&num);
    if (num < ans)
    {
        printf("less than the guess number..\n");
    }
    else if (num > ans)
    {
        printf("Higher number..\n");    
    }
    if (num == ans)
    {
        printf("congratulation you got it...!!\n");
        break;
    }
    flag --;
    printf("%d remaing\n",flag);
    
}
}





