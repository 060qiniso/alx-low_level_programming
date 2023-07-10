#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: copy of a string
 *
 * Return: the string copy
 */

char *_strdup(char *str);
{
	int p = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (p < i)
	{
		s[p] = str[p];
		p++;
	}

	s[p] = '\0';
	return (s);
}
