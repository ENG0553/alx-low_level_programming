#include "main.h"

/**
 * _puts - print a string
 * @str: string to printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}
