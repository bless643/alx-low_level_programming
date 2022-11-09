#include "main.h"

/**
<<<<<<< HEAD
 * cap_string - function that capitalize first character of a word
 * @str: string to capitalize
 * Return:returns the capitalized string
=======
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
>>>>>>> f4ab6409156aec4d97536d2430b0b858dd57834d
 */
char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
