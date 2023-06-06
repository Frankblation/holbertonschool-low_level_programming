#include "main.h"
#include <stdio.h>
/**
 * main - Prints Fizz Buzz
 * Return: Always ® (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((× % 3 == 0) && (× % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (× % 3 == 0)
		{
			printf("Fizz");
		}
		else if (× % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", ×);
		}
		if (x != 100)
		{
			printf(" ");
		}	
	}

	printf("\n");
	
	return (0);
}
