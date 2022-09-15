#include "holberton.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar (i);
	}
	_putchar ('\n');
}
