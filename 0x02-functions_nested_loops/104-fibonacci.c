#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	float first, second, next;

	first = 1;
	second = 2;
	printf("%.f, %.f", first, second);
	for (int c = 2; c < 98; c++)
	{
		next = first + second;
		first = second;
		second = next;
		printf(", %.f", next);
	}
	printf("\n");
	return (0);
}
