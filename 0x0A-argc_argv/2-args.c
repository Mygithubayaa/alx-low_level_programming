#include <stdio.h>

/**
 * main-print arumnets
 * for-loop
 * @argc:numbers of argumnts
 * @argv:arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
