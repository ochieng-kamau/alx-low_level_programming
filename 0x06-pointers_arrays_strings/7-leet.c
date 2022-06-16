#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == find[j])
			{
				s[i] = replacer[j / 2];
				j = 9;
			}
		}
	}

	return (s);
}
