#include "main.h"
/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int inChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChar = 1; inChar <= n; inChar++)
			_putchar('_');
		_putchar('\n');
}
