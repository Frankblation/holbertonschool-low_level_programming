#include "main.h"
#include <stdio.h>
/**
 * *_strncat - main file copies one string to another
 * @dest
 * @src
 * Return: Always 0
 */

char *_strncat(char *dest, const char *src, int n)
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
