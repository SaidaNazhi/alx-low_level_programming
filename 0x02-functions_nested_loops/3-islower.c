#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: is char
 * Return: 0 AND 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
