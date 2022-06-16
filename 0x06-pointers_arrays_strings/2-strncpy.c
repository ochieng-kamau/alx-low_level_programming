#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: integer
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		if (x < n)
			dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x++] = '\0';
	}

	return (dest);
}
