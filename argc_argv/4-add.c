#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numnbers
 * @argc: number of arghuments passed to a program
 * @argv: array of pointers to an argument
 * Return: 0 (successful) 1 if one of the arrays contains non digits
 * This program takes in the argc and argv parameters in the main function.
 * It uses a loop to iterate over each argument and checks if it contains
 * only digits. If an argument contains non-digits, the program prints an
 * error message and returns 1. Otherwise, it converts the argument to an
 * integer, adds it to a sum variable, and continues with the next argument.
 * After all arguments have been processed, the program prints the sum.
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;


	for (i = 1; i < argc; i++) /* Loops over each argument */
	{
		for (j = 0; argv[i][j]; j++) /* Loops over each character in argument */
		{

			if (!isdigit(argv[i][j])) /* Checks if character is not a digit */
			{
				printf("Error\n"); /* Prints an error message */

				return (1); /* Return 1 to indicate an error */
			}
		}
		sum += atoi(argv[i]); /* Converts argument to integer and add */


	}
	printf("%d\n", sum); /* Prints sum of all arguments */

	return (0); /* Return 0 to indicate success */

}
