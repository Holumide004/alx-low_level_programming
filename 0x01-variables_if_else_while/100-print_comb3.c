#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	m = 48;

	while (m < 57)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		m++;
	}
	putchar('\n');
	return (0);
}
