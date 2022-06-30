#include "main.h"

/**
 * _calloc - allocates mem for nmeb array of size bytes
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to alloc mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;

	return (c);
}
