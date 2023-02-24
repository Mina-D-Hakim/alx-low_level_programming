#include <stdio.h>
#include <unistd.h>
/**
 * main -  prints char below 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int Num;

	for (Num = 0; Num < 10; Num++)
	{
		putchar(Num + '0');
	}
	putchar('\n');
	return (0);
}

