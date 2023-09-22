#include "stdio.h"

/**
 * _puts- print string to stdout
 * @str: string
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
