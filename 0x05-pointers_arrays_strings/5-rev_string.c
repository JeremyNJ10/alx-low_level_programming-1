#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: Input string
 * Return: 0
 */

void rev_string(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;

		while (s < --t)
		{
			*s ^= *t;
			*t ^= *s;
			*s ^= *t;
			++s;
		}
	}
}
