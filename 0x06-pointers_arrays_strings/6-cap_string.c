#include "main.h"

/**
 * cap_string - Function capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[50] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')',
			 '{', '}' };

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
