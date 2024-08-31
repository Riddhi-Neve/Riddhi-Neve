//Define a function that takes an integer argument and returns its square. Declare a pointer to this function and use it to call the function. Print the result

#include <stdio.h>
int square(int a)
{
return a*a;
}
int main() {
	 int (*ptr)(int) = square;
	 int ans= ptr(5);
	  printf("square %d\n",ans);
	   

	      return 0;
}
