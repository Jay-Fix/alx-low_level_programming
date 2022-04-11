#include <stdio.h>
/**
 * main - entry
 *
 * Description: Print the lowercase alphabet
 * Return: Always (Success)
 */
int main(void)
{
  int alpha;
  for (alpha = 'a'; alpha <= 'z'; alpha++)
  putchar(alpha);
  putchar('\n');

  return (0);
}
