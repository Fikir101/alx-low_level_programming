#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar("\n");
	return (0);
}
