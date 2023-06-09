#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: starting address
 * @b: the desired value
 * @n: number
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
