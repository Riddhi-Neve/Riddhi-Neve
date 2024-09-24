#include <stdio.h>
int main()
{
	int r,l,w,b,h,choice;
	float area;
	printf("Input 1 for area of circle\n");
	printf("Input 2 for area of rectangle\n");
	printf("Input 3 for area of triangle\n");
	printf("Input your choice : ");
	scanf("%d",&choice); 
	switch (choice)
	{
		case 1: 
			printf("Input the Radius of circle : ");
			scanf("%d",&r);
			area = 3.14*r*r;
			break;
		case 2:
			printf("Input the length and Width of the Rectangle : ");
			scanf("%d %d", &l , &w);
			area = l*w;
			break;
		case 3:
			printf("Input the base and Height of the Triangle : ");
			scanf("%d %d", &b ,&h);
			area = .5*b*h;
			break;
	}
	printf("The area is : %f\n", area);
}


