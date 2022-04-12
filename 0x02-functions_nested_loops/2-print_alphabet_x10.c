#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int alpha;
int count;

count = 0;
while (count < 10)
{
for (alpha = 'a' ; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}

count++;
_putchar('\n');
}

}
