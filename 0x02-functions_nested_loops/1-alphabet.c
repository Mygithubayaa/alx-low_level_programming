#include "main.h"

/**
 * print_alphabet - print all letters
 *
 * print alphabet
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
