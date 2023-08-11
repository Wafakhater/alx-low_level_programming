#include <stdio.h>
/**
 * main - enrty point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
 /*48; decimal rep of 0*/
int digit = 48;
/*102; decimal rep of f*/
while (digit <= 102)
putchar(digit);
{
/*after 9 we jump till 96; */
if (digit == 57)
digit += 39;
digit++;
}
putchar('\n');
return (0);
}
