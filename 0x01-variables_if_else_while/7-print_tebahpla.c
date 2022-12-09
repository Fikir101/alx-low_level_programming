#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints lowercase alphabet in reverse mode
 * Return: Always 0
 */
int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
		putchar(f);

	putchar('\n');

	return (0);
}
