#include <stdio.h>
//call by value
void swap(int var,int var1)
{
int temp=var;
var=var1;
var1=temp;
printf("swap value is %d %d\n",var,var1);
}

int main()
{
int var=5,var1=10;
printf("before value %d %d\n",var,var1);
swap(var,var1);
printf("after swap value %d %d\n\n\n\n\n\n",var,var1);
return 0;   



//call by reference
void swap(int *var,int *var1)
{
	int temp=*var;
	*var=*var1;
	*var1=temp;
	//printf("swap value is %d %d\n",var,var1);
}

int main()
{
	int var=5,var1=10;
	printf("before value %d %d\n",var,var1);
	swap (&var,&var1);
	printf("after swap value %d %d\n",var,var1);
	return 0;
}
} 
