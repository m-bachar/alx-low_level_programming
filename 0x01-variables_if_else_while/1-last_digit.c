#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point of execution of the program
 *
 * Return: 0 uppon (Success)
 */
int main(void)
{
	int n;
	int sign;
	int lastDigit;
	int randomNumber;

	sign = 1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	randomNumber = n;
	if (n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	n %= 10;
	lastDigit = n * sign;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", randomNumber, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", randomNumber, lastDigit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", randomNumber, lastDigit);
	return (0);
}
