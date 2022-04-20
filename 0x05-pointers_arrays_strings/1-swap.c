#include "main.h"

/**
 * swap_int - swaps the values of two integars
 * @a: input
 * @b: input
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
