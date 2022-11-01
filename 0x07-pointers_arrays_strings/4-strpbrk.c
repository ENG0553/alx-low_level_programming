#include "main.h"

/**
 * _strpbrk - searches for string
 * @s: string
 * @accept: the set to be searched
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
