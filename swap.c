#include<stdio.h>

int main()
{
	int num1,num2;
	int temp;

	printf("Enter Numbers to Swap:\n");
	scanf("%d%d", &num1, &num2);

	printf("Before swap:\n\tnum1 = %d\n\tnum2 = %d\n",num1,num2);

	//with temp variable	
	/*
	temp = num1;
	num1 = num2;
	num2 = temp;
	*/

	//without temp variable
	/*
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	*/

	num1 = num1 * num2;
	num2 = num1 / num2;
	num1 = num1 / num2;

	printf("After swap:\n\tnum1 = %d\n\tnum2 = %d\n",num1,num2);

	return 0;
}
