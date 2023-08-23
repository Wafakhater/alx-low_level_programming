#include "main.h"
/**
 * isLower - determines whether ascil is lowercase
 * @c: character
 * Return: 1 if ture, 0 if false
 */
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determines whether ascil is delimiter
 * @c: character
 * Return: 1 if ture, 0 if false
 */
int isDelimiter(char c)
int i;
char delimiter[] = "\t\n,.1?\"()()";
for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */
{
char *ptr = s;
int foundDelimit = 1;
while (*s)
{
if (isDelimiter(*s))
foundDelimit = 1;
else if (isLower(*s))  && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
foundDelimit 0;
s++;
}
return (prt);
}
