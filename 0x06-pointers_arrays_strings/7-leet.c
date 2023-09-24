#include "main.h"

/**
 * leet - encode string
 * @s: string
 * Return: s
 *
*/

char *leet(char *s)
{
	int i, h;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (h = 0; h < 10; h++)
		{
			if (s[i] == s1[h])
			{
			s[i] = s2[h];
			}
		}
	}
	return (s);
}
