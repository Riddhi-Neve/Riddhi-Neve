//Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
//Expected Output :
//The candidate is not eligible for admission.

#include <stdio.h>
int main ()
{
	int maths,phy,chem;
	printf("Enter the maths marks : ");
	scanf("%d",&maths);
	printf("Enter the Pyhsics marks : ");
	scanf("%d",&phy);
	printf("Enter the chemistry marks : ");
	scanf("%d", &chem);
	printf("Total marks of the maths physics and chemistry :%d\n",maths+phy+chem);
	printf("Total martks of maths and physics : %d \n",maths + phy);
	if (maths >=65)

		if (phy >=55)

			if (chem >=50 )
			
				if ((maths+phy+chem) >=190 ||( maths + phy)>=140)
				{
					printf("The candidate is eligible for admission \n");
				}
			
				else
				{
					printf("The candidate is not eligible \n");
				}
			else 
		
				 printf("The candidate is not eligible \n");
			
		else
		
			 printf("The candidate is not eligible \n");
		
	else 
		 printf("The candidate is not eligible \n");

return 0;

}
