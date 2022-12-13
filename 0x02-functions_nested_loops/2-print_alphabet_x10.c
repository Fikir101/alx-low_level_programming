#include "main.h"

/**
 * print_alphabet_x10 - Entry
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 1;
	char l;

	while (count++ <= 10)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
