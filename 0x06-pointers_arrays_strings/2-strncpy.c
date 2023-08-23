#include "main.h"
/**
 * *_strncpy - a function that copy a strings.
 * @dest: pointer to destnation input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/**
 * iterate through src array
 * where if thers is no null byte
 * among the first n bytes of suorce
 * the string placed in dest will not be null terminated
 */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
/**
 * if the length of soruce is less than n
 * write additional nullbyet to dest to ensure
 * that a total of n byets is written 
 */
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
