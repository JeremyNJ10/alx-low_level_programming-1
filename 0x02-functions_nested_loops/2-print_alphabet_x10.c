#include "main.h"

/**
 * main - Write a function that prints 10 times the alphabet,
 * followed bya new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar (j);
		_putchar('\n');
	}
}
