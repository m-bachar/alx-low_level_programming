#include "main.h"

/**
 * print_chessboard - prints an non playable chessboard
 * @a: the board to print
 * Return: Always 0.
 */
void	print_chessboard(char (*a)[8])
{
	int	vertical;
	int	horizontal;

	vertical = 0;

	for (horizontal = 0; horizontal != 8; horizontal++)
	{
		for (vertical = 0; vertical != 8; vertical++)
		{
			_putchar(a[horizontal][vertical]);
		}
		_putchar('\n');
	}
}

