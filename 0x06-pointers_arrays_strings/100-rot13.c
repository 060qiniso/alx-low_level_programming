#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int q;
	int r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[q] == data1[r])
			{
				s[q] = datarot[r];
				break;
			}
		}
	}
	return (s);
}
