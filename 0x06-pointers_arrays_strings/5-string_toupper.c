#include "main.h"

/**
 * string_toupper-to print lowercase to be uppercase
 * @i:string
 *
 * Return:i
*/

char *string_toupper(char *i)
{
	int h;

	h = 0;
	while (i[h] != '\0')
	{
		if (i[h] >= 'a' && i[h] <= 'z')
		{
			i[h] = i[h] - 32;
		}
			h++;
	}
	return (i);
}
