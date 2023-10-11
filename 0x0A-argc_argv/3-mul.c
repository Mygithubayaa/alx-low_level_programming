#include <stdio.h>

/**
 * main-multibling
 * @argc:numbers of argu.
 * @argv:argu.
 * Return: (0)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int n_1 = atoi(argv[1]);
	int n_2 = atoi(argv[2]);

	int multi = n_1 * n_2;

	printf("%d\n", multi);
	return (0);
}
