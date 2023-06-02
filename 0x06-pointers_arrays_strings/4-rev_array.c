#include"main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of array
 *
 * return: none
 */

void reverse_array(int *a, int n)
{

	int b, c, temp;

	for (b = 0, c = n - 1; b < c; b++, c--)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
	}
}
