/*
* Author: Yoonhyuck WOO /JBNU_Industrial Information system Engineering 
  Date  ; Sep. 14 2020
  Title:  Factorial loop
*/

#include<stdio.h>

int factorial_loop(int num)
{
	int i = 0;
	int temp = 0;
	int result = 1;
	if (num == 0)
	{
		result = 1;
	}
	else if (num < 0) 
	{
		printf("Out of order.\n");
	}
	else 
	{
		for (i = num; i > 0; i--)
		{
			result = i * result;
		}
	}
	return result;
}

int main() 
{
	int num = 0;
	printf("Write the number: ");
	scanf_s("%d", &num);
	printf("%d", factorial_loop(num));
	return 0;
}