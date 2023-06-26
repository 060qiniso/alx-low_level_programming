#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
