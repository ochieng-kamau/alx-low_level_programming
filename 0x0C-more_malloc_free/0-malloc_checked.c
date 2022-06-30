#include "main.h"

/**
 * malloc_checked - checks whether malloc passes or fails
 * @b: unsigned integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
