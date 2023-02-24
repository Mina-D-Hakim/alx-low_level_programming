#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int ST;

	for (st = 'a'; st <= 'z'; st++)
	{
		putchar(st);
	}
	for (st = 'A'; st <= 'Z'; st++)
	{
		putchar(st);
	}
	putchar('\n');
	return (0);
}
