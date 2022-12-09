#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0;
 */
int main(void)
{
	int c = 0;
	int fd;
	int id;
	int c2;
	int fd2;
	int id2;

	while (c <= 98)
	{
		fd = (c / 10 + '0');
		id = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			fd2 = (c2 / 10 + '0');
			id2 = (c2 / 10 + '0');

			if (c < c2)
			{
				putchar(fd);
				putchar(id);
				putchar(' ');
				putchar(fd2);
				putchar(id2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
