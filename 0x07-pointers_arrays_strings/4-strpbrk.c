#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string provided
 * @accept: matched character
 * Return: pointer to the matched byte or Null
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
			{
				return (s);
			}

			x++;
		}

		s++;
	}

	return (0);
}
