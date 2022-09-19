#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: a character variable that the function takes in
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
