#include "main.h"
/**
 * _pow_recursion - search a string for any of set of bytes.
 * @x: intput
 * @y: intput
 * Return: pointer to the byte in 's' that matches one of
 * the bytes in 'accept' or NULL if no such byte is found.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == i)
return (x);
else if (y == 0)
return (1);
return (n * _pow_recursion(x, y - 1));
}
