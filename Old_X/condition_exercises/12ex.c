#include <stdio.h>
int main ()
{
	int roll,m,p,c;
	char stu[50];
	printf("Input the Roll no: ");
	scanf("%d",&roll);
	printf("Input the Name of student : ");
	scanf("%s",stu);
	printf("Input Marks in Maths , physics and chemistry : ");
	scanf("%d %d %d",&m , &p , &c);
	printf("Roll number : %d\n",roll);
	printf("Name of student : %s\n",stu);
	printf("Marks in Maths : %d\n",m);
	printf("Marks in physics : %d\n",p);
	printf("Marks in Chemistry : %d\n",c);
	printf("Total Marks : %d\n",m+p+c);
	float per = (m+p+c)/3.0;
	printf("Percentage : %.2lf\n",per);
	if (per >= 90 && per < 100 )
	{
		printf("First class with Distinction\n");
	}
	else if (per >=80 && per < 90 )
	{
		printf("First class\n");
	}
	else if (per >=70 && per < 80 )
	{
		printf ("Average\n");
	}
	else if (per >= 60 && per < 70 )
	{
		printf("Good \n");
	}
	else if (per >=50 && per < 60)
	{
		printf("Satisfied \n");
	}
	else if (per <= 40)
	{
		printf("Fail");
	}
	return 0;
}



