#include <stdio.h>
/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
int i
  ;
for (i = 0; i <= 20; i++)
{
putchar(i);
if (i != 20)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
