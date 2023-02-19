#include <stdlib.h>
#include <time.h>
/*
 * main - A program assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}

