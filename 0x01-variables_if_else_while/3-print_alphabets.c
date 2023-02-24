#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * Return: Always 0 (success)
 */
int main(void)
{
	int C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
