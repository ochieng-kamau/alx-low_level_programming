include "main.h"

/**
 * reset_to_98 - function that resets the value of a pointer to 98
 * @n: integer whose value is to be reset to 98
 * Return: Always
 */

void reset_to_98(int *n)
{
	int *n;
	int p;

	p = 98;
	n = &p;

	return (*n);
}
