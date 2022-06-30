#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: array of integers ordered
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, p = min;

	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	{
		return (0);
	}

	while (i <= max - min)
	{
		arr[i++] = p++;
	}

	return (arr);
}
