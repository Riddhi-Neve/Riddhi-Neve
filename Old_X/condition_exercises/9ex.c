//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
//Test Data : 7 9
//Expected Output :
//The coordinate point (7,9) lies in the First quadrant.

#include <stdio.h>
int main ()
{
	int x,y;
	int quar1,quar2,quar3,quar4;
	printf("Enter the x asis number : ");
	scanf("%d",&x);
	printf("Enter the y asis number : ");
	scanf("%d",&y);
	if ( x > 0 && y > 0)
	{
		printf("1st Quadrant\n");
	}
	if (x < 0 && y > 0 )
	{
		printf("2nd Quadrant\n");
	}
	if ( x < 0 && y < 0 )
	{
		printf("3rd Quadrant\n");
	}
	if ( x > 0 && y < 0 )
	{
		printf("4th Quadrant\n");
	}
	else 
	{
		printf("Enter valid input axis...\n");
	}
	return 0;
}


