#include <stdio.h>
#include <unistd.h>
/**
 * main - prints allsingle digit numbers of 
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int Num;

	for (Num = 0; Num < 10; Num++)
	{
		printf("%d", Num);
	}
	putchar('\n');
	return (0);
}
