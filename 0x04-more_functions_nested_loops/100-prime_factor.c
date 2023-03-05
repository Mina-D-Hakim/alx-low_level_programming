#include <stdio.h>

/**
 * main -  prints the largest prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long x, div;


	x = 612852475143;

	for (div = 2; x > div; div++)
	{
		while (x % div == 0)
		{
			x = x / div;
		}
	}
	printf("%lu", div);
	putchar('\n');
	return (0);
}
