#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: value of an input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int b, c, sum1, sum2;

	for (b = 0; b <= (size * size); b = b + size + 1)
		sum1 = sum1 + a[b];
	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
	sum2 = sum2 + a[c];
	printf("%d, %d\n", sum1, sum2);
}
