#include "main.h"

/**
 * print_alphabet - Entry point
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
