#include <stdio.h>

/**
 * main-print numbers of arguments
 *
 * @argc:numbers of arguments
 * @argv:arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
