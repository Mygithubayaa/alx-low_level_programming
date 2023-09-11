#include <stdio.h>

/**
 * main - Entry point
 *
 * a c program using for loop
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
