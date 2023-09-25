#include <stdio.h>

/**
 * main-to generat 2digit
 *
 * Return: 0
 *
*/

int main(void)
{
	int i;
	int j;

	for (i < 48; i <= 56; i++)
	{
		for (j < 48; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57);

				{
					putcahr(",");
					putchar(" ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
