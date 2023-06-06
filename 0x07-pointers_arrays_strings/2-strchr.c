#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
