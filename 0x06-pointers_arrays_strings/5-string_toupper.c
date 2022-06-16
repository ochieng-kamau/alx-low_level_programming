#include "main.h"

/**
 * string_toupper - converts string lowercase to uppercase
 * @s: input string
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
