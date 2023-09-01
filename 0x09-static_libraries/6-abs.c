#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the ablsolute value of an integer
 *  @n: takes integer type input for function
 *  Return: 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
n = (-1) * n;
return (n);
}
