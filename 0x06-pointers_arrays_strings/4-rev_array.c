#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: content of array
 * @n: elements of content
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
