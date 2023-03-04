#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
*/

int positive_or_negative(int n)
{

    if (n > 0)
       pintf("%d is positive\n", n);


    else if (n < 0)
       printf("%d is negative\n", n);

    else
       printf("%d is zero\n", n);


    return (0);

}

int main(void)
{
    int i;

    i = 0;
    positive_or_negative(i);

    return (0);
}
