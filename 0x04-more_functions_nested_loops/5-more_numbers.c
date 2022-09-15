#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 - 14,
 * followed by a new line
 * Return: Nothint
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 9 > 0)
				_putchar((i / 10) + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
