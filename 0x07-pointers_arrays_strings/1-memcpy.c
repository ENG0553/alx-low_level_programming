#include "main.h"

/**
 * _memcpy - copies from memory area
 * @dest: Apointer to the memory
 * @src: the source buffer
 * @n: the number
 * Return: A pointer
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index ++)
		destination[index] = source[index];
	return (dest);
}
