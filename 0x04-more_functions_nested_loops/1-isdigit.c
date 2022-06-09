#include "main.h"

/**
 * _isdigit - checks to see if the character is a number 0 to 9
 * @c: integer to be evaluated
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
