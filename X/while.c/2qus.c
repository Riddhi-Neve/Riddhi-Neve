#include <stdio.h>
int main() {
	int num,i=0;
	printf("Enter the integer (ENTER 0 TO STOP THIS):\n ");
while(1){
	printf("enter the value :");
	scanf("%d",&num);
	if(num==0)
	{
		break;
	}
	if(num>0)
	{
		i+=num;
	}
}
		printf("Sum of the all integer:%d\n",i);
	

	return 0;

}


	
 
