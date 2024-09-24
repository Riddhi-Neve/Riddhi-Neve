#include <stdio.h>
int main()
{
	int min,max,i,ctr;
	printf("Enter the Starting Range : ");
	scanf("%d", &min);
	printf("Enter the Ending Range : ");
	scanf("%d", &max);
	printf("The prime number between %d to %d are : \n",min,max);
	for (i=min; i<=max; i++)
	{
		ctr = 0;
		for (int j =2 ; j<=i/2 ; j++)
		{
			if(i % j == 0)
			{
       				ctr++;
				break;
			}
		}
		if (ctr == 0 && i != 1)
			printf("%d\n",i);
	}
	printf("\n");
}



