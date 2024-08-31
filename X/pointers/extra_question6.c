//Write a function that takes two integer pointers as arguments and swaps the values they point to. In your `main` function, declare two integers, call the swap function with their addresses, and print the values to confirm the swap.

#include <stdio.h>
int swap(int *ptr1,int *ptr2)
{
	    int temp;
	     temp = *ptr1;
	      *ptr1 = *ptr2;
	       *ptr2 = temp;
}
int main() {
	 int ptr1=60;
	  int ptr2=120;
	   printf("before swapping a=%d b=%d\n",ptr1,ptr2);
	    swap(&ptr1, &ptr2);
	     printf("after swapping a=%d b=%d\n",ptr1,ptr2);
	         return 0;
}
