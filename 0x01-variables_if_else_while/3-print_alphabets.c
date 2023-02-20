#include <stdio.h>
#include <stdlib.h>
/**
 * main - A  program that prints the alph.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	char alphABET[] = ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$");
	for (i = 0; i < 26; i++)
	{
		putchar(alphABET[i]);
	}
	for (j = 26; j < 53; j++)
	{
		putchar(alphABET[j]);
	}
	putchar('\n');
	return (0);
}
