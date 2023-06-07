#include "main.h"

/**
 * print_diagums - entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diadsums(int *a, int size)
{
	int n, b, z;

	n = 0; 
	b = 0;

	for (z = 0; z < size; z++)
	{
		n = n + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		b += a[z * size + (size - z - 1)];
	}


	printf("%d, %d\n", n, b,);
}
