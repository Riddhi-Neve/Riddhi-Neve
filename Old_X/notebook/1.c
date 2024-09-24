#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter the x and y value : ");
	scanf("%d %d",&x, &y);
	(x==y)?printf("Equal \n"):(x>y)?printf("X is higher\n"):printf("Y is higher\n");
	return 0;
}
