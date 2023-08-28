#include "main.h"
/**
 * _strspn - get the lenght of a prefix substring.
 * @s: string
 * @accept: bytes.
 * Return: unsigend int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, jr;
for (i = 0; s[i] != '\0'; i++)
{
for (jr = 0; accept[jr] != s[i]; jr++)
{
if (accept[jr] == '\0')
return (i);
}
}
return (i);
}
