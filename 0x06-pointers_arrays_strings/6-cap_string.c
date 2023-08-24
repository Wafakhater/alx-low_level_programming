#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
int index = 0;
while (s[index])
{
while (!(s[index] >= 'a' && s[index] <= 'z'))
index++;
if (s[index - 1] == ' ' ||
s[index - 1] == '\t' ||
s[index - 1] == '\n' ||
s[index - 1] == ',' ||
s[index - 1] == ';' ||
s[index - 1] == '.' ||
s[index - 1] == '!' ||
s[index - 1] == '?' ||
s[index - 1] == '"' ||
s[index - 1] == ')' ||
s[index - 1] == ')' ||
s[index - 1] == '{' ||
s[index - 1] == '}' ||
index == 0)
s[index] -= 32;
index++;
}
return (s);
}
