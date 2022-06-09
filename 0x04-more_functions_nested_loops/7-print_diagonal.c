#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Parameter for diagonal line length
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < a; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
