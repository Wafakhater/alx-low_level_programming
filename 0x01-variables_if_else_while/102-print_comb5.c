#include <stdio.h>
/**
 * main - enrty point
 *
 * Description: write a program that prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int firstdigit = 0, secondigit;
while (firstdigit <= 99)
{
secondigit = firstdigit;
while (secondigit <= 99)
{
if (secondigit != firstdigit)
{
putchar((firstdigit / 10) + 48);
putchar((firstdigit % 10) + 48);
putchar(' ');
putchar((secondigit / 10) + 48);
putchar((secondigit % 10) + 48);
if (firstdigit != 98 || secondigit != 99)
{
putchar(',');
putchar(' ');
}
}
secondigit++;
}
firstdigit++;
}
putchar('\n');
return (0);
}
