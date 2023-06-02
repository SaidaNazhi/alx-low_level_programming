#include "main.h"
/**
 * _isalpha - t checks for alphabetic character.
 * @c: is alpha
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
