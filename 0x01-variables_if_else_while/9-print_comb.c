#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i  + '0');
		if (i != 9)	
		{	
			putchar(',');
			putchar(' ' );
		}
		else 

	}
	return (0);
}
