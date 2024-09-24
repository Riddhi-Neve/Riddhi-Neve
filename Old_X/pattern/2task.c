#include <stdio.h>
int main()
{
	int num,i;
	printf("Enter the rows : ");
	scanf("%d",&num);
	for (i = 0 ; i <= num ; i++)
	{
		printf("#");
	}
	 printf("#");
	  printf("\n#");
	for (i= num ; i >=1 ; i--)
	{
		printf("%d",i);
	}
	 printf("#");
	 printf("\n#");
	 for (i = 1 ; i <= num ; i++)
	 {
		 printf("%d",i);
	 }
	 printf("#");
	  printf("\n#");
	for (i = 1 ; i <= num ; i++)
	{
		printf("#");
	}
	 printf("#\n");
	return 0 ;
}
