#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 101 || i == 113)
			i++;
		putchar(i++);
	}
	return (0);
}
