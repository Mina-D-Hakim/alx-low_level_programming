#include "main.h"

/**
 * print_sign - Returns 1 and prints + if n is greater than zero.
 * Returns 0 and prints 0 if n is zero.
 * Returns -1 and prints - if n is less than zero.
 * @c: Number to test
 *
 * Return: Sign from a number.
 */

int print_sign(int c)
{
	char sign;
	int value;

	if (c > 0)
	{
		value = 1;
		sign = '+';
	}
	else if (c < 0)
	{
		value = -1;
		sign = '-';
	}
	else
	{
		value = 0;
		sign = '0';
	}
	_putchar(sign);
	return (value);
}
