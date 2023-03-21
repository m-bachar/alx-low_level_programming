#include <unistd.h>

/*
 * main - check the code
 *
 * Return: Always (0) uppon success.
 */
int	main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
