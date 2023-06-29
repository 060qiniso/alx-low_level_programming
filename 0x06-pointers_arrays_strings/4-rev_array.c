#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array
 * @n: is the number of elements of the array
 * Return: alway 0
 */
void reverse_array(int *a, int n)
{
	int z;
	int b;

	for (z = 0; z < n--; z++)
	{
		b = a[z];
		a[z] = a[n];
		a[n] = b;
	}
}
