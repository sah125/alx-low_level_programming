#include <stdio.h>
#include <stdlb.h>
#include<time.h>

/**
 * main - A program that generate random and print number and pos/neg ,0
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
		{
			printf("%d i zero", n);
		}
	return (0);
}
