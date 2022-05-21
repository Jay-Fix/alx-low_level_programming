#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @p: the int to print
 * Return: Always 0.
 */
int print_sign(int p)

{
if (p > 0)
{
_putchar ('+');
return (1);
}

else if (p == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
