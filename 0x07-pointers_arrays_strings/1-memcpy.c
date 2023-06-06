#include "main.h"
#include <stdio.h>
/**
 * _memcpy - that copies memory area
 * @src: source
 * @dest: destination
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	for (; a < b; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
