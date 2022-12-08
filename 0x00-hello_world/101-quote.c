#include <unistd.h>
#include <stdio.h>
/**
 * main - prints exactly and that peace of art is useful
 * Return: 1
 */
int main(void)
{
	write(1, "and that peace of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	fprintf(stderr, " ");
	return (1);
}
