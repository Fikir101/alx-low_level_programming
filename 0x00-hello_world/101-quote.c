#include <unistd.h>
#include <stdio.h>
/**
 * main - prints exactly and that peace of art is useful
 * Return: always 0 (Success)
 */
int main(void)
{
	write(2, "and that peace of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
