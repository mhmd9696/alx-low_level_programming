#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: lastDigit
 */
int print_last_digit(int c)
{
	if (c < 0)
	lastDigit = -1 * (c % 10);
	else
	lastDigit = c % 10;
	_putchar(last Digit + '0');
	return (lastDigit);
}
