#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @n:  is the int that will use for the argument of the function
 * Return: lastDigit
 */
int print_last_digit(int n)

	int lastDigit;
{
	if (n < 0)
	lastDigit = -1 * (n % 10);
	else
	lastDigit = n % 10;

	_putchar(last Digit + '0');
	return (lastDigit);
}
