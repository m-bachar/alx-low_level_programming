#include <unistd.h>

/**
 * myPutstr - A function that prints char *str char by char in the std output
 * @str: The argument passed to the function to be printed
 */
void	myPutstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: 1 Uppon Success
 */
int main(void)
{
	myPutstr("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
