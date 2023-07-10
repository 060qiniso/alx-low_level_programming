#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of array and print
 * @c: characters to be filled in
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
