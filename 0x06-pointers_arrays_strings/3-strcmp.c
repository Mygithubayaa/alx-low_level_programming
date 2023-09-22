#include "main.h"

/**
 * _strcmp- function to comper two
 * @s1: string 1
 *
 * @s2: string 2
 * Return: s1[c]-s2[c]
*/

int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
