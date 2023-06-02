#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a;
	char alpha;

	for (a = 48; a < 58 ; a++)
	{
		putchar(a);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
