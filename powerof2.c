#include<stdio.h>

int main()
{
	int num = 16;//20;

	//to find given number if 'power of 2' or not
	num & (num - 1) ? printf("not a power of 2\n"): printf("power of two\n");

}
