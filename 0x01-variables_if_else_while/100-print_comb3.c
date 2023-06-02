#include <stdio.h>
/**
 * main - entry points
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);

				if ( a != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	purchar('\n');
	return 0;
}
