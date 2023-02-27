#include "main.h"

/**
 * _isalpha - Test wheter c is lowercase
 * @c: Caracter to test
 *
 * Return: 1 if c is a letter, lowercase or uppercase.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
