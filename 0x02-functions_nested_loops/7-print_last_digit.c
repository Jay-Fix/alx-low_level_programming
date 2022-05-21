#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @p: The int to print
 * Return: Always 0.
 */

int print_last_digit(int p)

{
int last_digit;

if (p < 0)
{
last_digit = (-1 * (p % 10));
_putchar (last_digit + '0');
return (last_digit);
}

else
{
last_digit = (p % 10);
_putchar (last_digit + '0');
return (last_digit);
}

}
