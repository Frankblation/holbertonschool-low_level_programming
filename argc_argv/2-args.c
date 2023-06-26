#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all args
 * @argc: number of things
 * @argv: array holds string value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
