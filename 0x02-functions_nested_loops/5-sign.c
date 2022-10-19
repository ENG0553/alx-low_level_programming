#include "main.h"

/**
 * print_sign - of number
 * @n: the number of sign to be print
 * Return: 1 if is greater than zero
 * 0 of number zero
 * -1 if number is less than zero
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
		_putchar('-');
		return (-1);
	}
}
