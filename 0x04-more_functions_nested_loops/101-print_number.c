#include "main.h"

/**
 * print_number - prints an integar
 * @n: integar to be printed
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
unsigned int x;

if (n < 0)
{
x = -n;
_putchar ('-');
}
else
{
x = n;
}

if (x / 10)
{
print_number(x / 10);
}
_putchar((x % 10) + '0');
}
