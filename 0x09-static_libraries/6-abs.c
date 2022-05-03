#include "main.h"

/**
 * _abs - compute the absolute value of an integar
 * @p: number to be checked
 * Return: Always 0.
 */

int _abs(int p)

{
if (p < 0)
{
return (p * (-1));
}

else if (p == 0)
{
return (0);
}

else 
{
return (p);
}

}
