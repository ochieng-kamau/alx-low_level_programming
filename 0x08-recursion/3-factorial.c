#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the integer whose factorial we seek
 * Return: factorial of n or 1 if n < 0 as an error
 */

int factorial(int n)
{
	int res = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	res *= factorial(n - 1);

	return (res);
}
