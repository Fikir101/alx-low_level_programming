#include "main.h"

/**
 * _strcat - concatinate two string
 * @d: char
 * @s: char
 * Return: char
 */

char *_strcat(char *d, char *s)
{
	char *f = d;

	while (*d != '\0')
	{
		d++;
	}

	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (f);
}
