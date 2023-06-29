#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: value of an input
 * Return: n
 */
char *leet(char *n)
{
	int q, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (q = 0; n[q] != '\0'; q++)
	{
		for (r = 0; r < 10; r++)
		{
			if (n[q] == s1[r])
			{
				n[q] = s2[r];
			}
		}
	}
	return (n);
}
