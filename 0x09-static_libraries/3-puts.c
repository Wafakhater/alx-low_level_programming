#include "main.h"
/**
 * _puts - print a string, followed by a newline
 * @str: string parameter input
 * Return: length of a string
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str + 0);
str++;
}
putchar('\n');
}
