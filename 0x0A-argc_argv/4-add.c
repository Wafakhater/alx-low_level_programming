#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - string there are digit.
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char const *str)
{
/*declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str))/*count string*/
{
if (!isdigit(str[count]))/*checkif str there are digit*/
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char const *argv[])
{
/*declaring variables*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc)/*goes through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
/*conditions if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
