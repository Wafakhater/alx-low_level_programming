#include "main.h"
/**
 * _puts - ptint a string, followed by a new line.
 * @s: pointer to the string to print
 * Return: void
 */
void _puts(char *s)
{
int i;
while (s[i])
{
_putchar(s[i]);
i++;
}
}
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *s)
{
int sing = 1;
unsigned long int resp = 0, firstNum, i;
for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '-')
{
sing *= -1;
}
}
for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
return (sing *resp);
}
/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
unsigned long int divisor = 1, i, resp;
for (i = 0; n / divisor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}
/**
 * main - prints the result of the multiplication, followed by a new line.
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
_puts("Error ");
exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
