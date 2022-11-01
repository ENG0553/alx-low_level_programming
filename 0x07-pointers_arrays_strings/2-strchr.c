#include "main.h"

/**
 * _strchr - location of a character
 * @s: string
 * @c: the character
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
