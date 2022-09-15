#include "holberton.h"

/**
 * print_square - A function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; size++)
		{
			for (j = 0; j < size; size++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
