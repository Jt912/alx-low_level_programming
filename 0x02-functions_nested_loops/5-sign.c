#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to be checked for
 * Return: 1, 0, -1 and prints +, 0, - if n is greater lessor equal to 0,
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
