#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arg
 * @argc: number
 * @argv: string
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
