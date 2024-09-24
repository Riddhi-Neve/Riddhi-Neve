// Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
// Test Data : 135
// Expected Output :
// The person is Dwarf.


#include <stdio.h>
int main ()
{
	int num,i,j,k;
	printf("Enter the height : ");
	scanf("%d", &num);
	if(num<150)
	{
		printf("Dwarf\n");
	}
	else if (num >=150 && num <165 )
	{
		printf("Average Height\n");
	}
	else if (num >=165 && num <=195 )
	{
		printf("Tall\n");
	}
	else 
	{
		printf("Abnormal height\n");
	}
return 0;
}
