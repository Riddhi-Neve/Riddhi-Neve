//Write a C program to calculate profit and loss on a transaction.
//Test Data :
//500 700
//Expected Output :
//You can booked your profit amount : 200


#include <stdio.h>
int main()
{
	int sell, cost, profit, loss;
	printf("enter the cost price : ");
	scanf("%d",&cost);
	printf("enter the sellprice : ");
	scanf("%d", &sell);
	if(sell > cost)
	{
		profit = sell - cost;
		printf("profit %d\n", profit);
	}
    	else if (cost > sell)
	{
		loss = cost - sell;
		printf("loss %d\n", loss);
	}
	else
  	{
		printf("nor the profit nor the loss");
	}
	return 0;

}
