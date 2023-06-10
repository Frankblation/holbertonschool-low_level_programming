#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Concatenates two strings using imputed numner of bytes
 * @dest: The string to be appended upon.
 * @src: The string to append to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
