#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all the letters except q and e
 * Return: Always 0
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')
			putchar(e);
	}

	putchar('\n');

	return (0);
}
