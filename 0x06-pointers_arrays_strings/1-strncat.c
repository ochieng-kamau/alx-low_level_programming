#include "main.h"

/**
 * _strncat - appends two strings
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: integer
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}

	return (dest);
}
