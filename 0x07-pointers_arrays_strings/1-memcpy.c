#include "main.h"

/**
 * _memcpy - copy number of bytes from source address to destination address
 * @dest: address to be copied to
 * @src: source of data to be copied
 * @n: bytes of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	return (dest);
}
