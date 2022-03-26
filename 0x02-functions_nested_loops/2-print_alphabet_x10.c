#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n')
		n++;
	}
}
