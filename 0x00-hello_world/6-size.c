#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizef(char));
	printf("Size of an int: %lu byte(s)\n", sizef(int));
	printf("Size of a long int: %lu byte(s)\n", sizef(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizef(long long int));
	printf("Size of a float: %lu byte(s)\n", sizef(float));
	return (0);
}
