#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet is lowercase then in upercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e;)
			putchar(i);
	putchar('\n');
	return (0);
}
