#include<stdio.h>

int main()
{
	int num = 20;

	//find num is even or odd without modulus(%) operator
	(num & 1) ? printf("odd\n"):printf("even\n");

}
