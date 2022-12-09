#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints base 10
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');

	return (0);
}
