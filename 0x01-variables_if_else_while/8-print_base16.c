#include <stdio.h>
/**
 * main - Prints a hexadecimal string
 * all the numbers of base 16 in lowercase
 * Return: Always (Success)
 */
int main(void)
{
char i;
char j;


for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
