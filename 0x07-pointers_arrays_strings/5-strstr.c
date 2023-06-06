#include "main.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring.
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *ptr = needle;

		while (*a == *ptr && *ptr != '\0')
		{
			a++;
			ptr++;
		}
		if (*ptr == '\0')
			return (haystack);
	}
	return (0);
}
