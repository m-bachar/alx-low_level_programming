#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  i;

	i = 48;
	while (i <= 57)
		putchar(i++);
	i = 97;
	while (i <= 102)
		putchar(i++);
	putchar(10);
	return (0);
}
