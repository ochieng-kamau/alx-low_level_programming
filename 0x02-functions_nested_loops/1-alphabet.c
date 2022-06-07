#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet in lowercase then a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	return (0);
}
