#include "main.h"
#include <stdio.h>
/**
 * _strcat - cats two strings
 * @dest: string to be added to
 * @src: string to be added
 * Return: value of the cat strings
 */
char *_strcat(char *dest, char *src)
{
	int lengthD = 0;

	int lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 99)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
}
