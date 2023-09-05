#include "main.h"
/**
 * *create_array - create an array of char
 * and initialzes it with a specific char.
 * @size: size of the array
 * @c: char of initialize
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
