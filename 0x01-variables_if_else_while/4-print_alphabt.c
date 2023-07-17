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
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		PUTCHAR(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
