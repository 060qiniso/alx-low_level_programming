#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: concatenate string
 * @s2: concatenate string
 *
 * Return: pointer should point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, a = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[1])
		i++;

	while (s2[a])
		a++;

	c = i + a;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	a = 0;

	while (b <= i)
	{
		if (b <= i)
			s[b] = s1[b];
		if (b >= i)
		{
			s[b] = s2[a];
			a++;
		}
		b++;
	}
	s[b] = '\0';
	return (s);
}
