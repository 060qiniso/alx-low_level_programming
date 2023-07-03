#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, value, check;

	value = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		check = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
