#include "main.h"
/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
