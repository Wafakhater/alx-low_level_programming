#include <stdio.h>
/**
 * main - enrty point
 *
 * Description: print a-z in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
