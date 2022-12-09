#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
