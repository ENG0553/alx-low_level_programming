#include <unisted.h>
#include "main.h"

/**
 * _putchar - write
 * @c: the character to print
 * Return: On case 7 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
