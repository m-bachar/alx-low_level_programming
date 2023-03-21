#include "main.h"

/*
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int alpha = 97;

	while (i < 10)
	{
		while (alpha <= 122)
		{
			write(1, &alpha, 1);
			alpha++;
		}
		alpha = 97;
		write(1, "\n", 1);
		i++;
	}
}
