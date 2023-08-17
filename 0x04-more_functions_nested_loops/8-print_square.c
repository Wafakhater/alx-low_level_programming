#include "main.h"

/**
 * print_square - print a square using character #
 *
 * @size: is the size of square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
