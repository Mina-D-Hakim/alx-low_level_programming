#include "mainh"

/**
 * main - entry point
 *
 * Return: 0
 */

int positive_or_negative(int n)
{
    if (n > 0)
       pintf("%d is positive\n", n);

    else if (n < 0)
       printf("%d is negative\n", n);
     else printf("%d is zero\n", n);

    return (0);

}
