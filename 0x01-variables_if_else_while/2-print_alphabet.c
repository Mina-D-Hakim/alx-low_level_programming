#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
