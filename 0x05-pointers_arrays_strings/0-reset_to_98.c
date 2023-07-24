#include <stdio.h>

/**
 * reset_to_98 - print n as pointer to 98
 *
 * @n:An integer input pointer
 *
 * Return: empty
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}
