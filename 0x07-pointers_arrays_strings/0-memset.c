#include "main.h"

/**
 * _memset - memory set
 * @s: memory area pointer
 * @c: memory area character
 * @n: the number
 * Return: The pointer
 */
void *_memset(void *s, int c, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
