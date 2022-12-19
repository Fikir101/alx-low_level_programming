nclude "main.h"
/**
 * swap_int - swaps the value of int a and int b
 * @a: 1st int
 * @b: 2nd int
 * Return: 0
 * fikir junior alx student
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
