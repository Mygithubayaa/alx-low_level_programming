#include <stdio.h>

/**
 * main-print name of program
 *
 * @argc:numbers of argument
 *
 * @argv:argumens
 * Return: (0)
*/

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}