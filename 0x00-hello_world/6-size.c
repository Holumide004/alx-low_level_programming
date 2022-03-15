#include <stdio.h>

/**
 * * main - entry point
 * * Return: always 0
 * */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	int sa = sizeof(a);
	int sb = sizeof(b);
	int sc = sizeof(c);
	int sd = sizeof(d);
	int se = sizeof(e);

	printf("Size of a char: %d byte(s)\n", sa);
	printf("Size of an int: %d byte(s)\n", sb);
	printf("Size of a long int: %d byte(s)\n", sc);
	printf("Size of a long long int: %d byte(s)\n", sd);
	printf("Size of a float: %d byte(s)\n", se);
	return (0);
}
