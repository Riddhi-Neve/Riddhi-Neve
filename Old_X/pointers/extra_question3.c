//Declare an integer variable, a pointer to that integer, and a pointer to the pointer. Initialize the pointers and use the pointer to the pointer to change the value of the integer variable. Print the integer variable to confirm the change.

#include <stdio.h>

int main() {
	   int num=50;
	      int *ptr = &num;
	         int **ptr1 = &ptr;
		    printf("variable :%d\n pointer 1 %d\n pointer 2: %d\n",num,*ptr,**ptr1);
		       **ptr1= 100;
		           printf("variable :%d\n pointer 1 %d\n pointer 2: %d\n",num,*ptr,**ptr1);
			    
			       return 0;
}
