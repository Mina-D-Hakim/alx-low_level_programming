#include <unistd.h>
#include <stdio.h>
/**
 * main -  prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
