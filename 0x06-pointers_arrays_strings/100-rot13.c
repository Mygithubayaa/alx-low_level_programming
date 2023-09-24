#include "main.h"
#include <stdio.h>

/**
 * rot13 -  to encode
 * @str: string pointer
 * Return: str
*/

char *rot13(char *str)
{
	int i;
	int n;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
	for (n = 0; n < 52; n++)
	{
	if (str[i] == alpha[n])
	{
	str[i] = rot[n];
	break;
	}
	}
	}
	return (str);
}
