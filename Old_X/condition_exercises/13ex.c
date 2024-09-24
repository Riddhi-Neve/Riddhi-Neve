// Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
// Test Data :
// 42
// Expected Output :
// Its very hot.

#include <stdio.h>
int main ()
{
	int num;
	printf("Enter the temperature : ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Freezing weather\n");
	}
	else if(num >= 0 && num < 10 )
	{
		printf("Very cold weather\n");
	}
	else if (num >=10 && num < 20 )
	{
		printf("Cold weather\n");
	}
	else if (num >= 20 && num < 30)
	{
		printf("Its Normal in temperature\n");
	}
	else if (num >=30 && num < 40)
	{
		printf("Its Hot\n");
	}
	else if (num >=40 )
	{
		printf("Its Very Hot\n");
	}
	return 0;
}
