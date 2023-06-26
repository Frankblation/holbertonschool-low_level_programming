#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiples two numbers
 * @argc: number of
 * @argv: string
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc - 1 == 2)

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
