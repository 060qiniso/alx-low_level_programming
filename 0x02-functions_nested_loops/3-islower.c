#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @c: charecter to be checked
 * Return: 1 if charecter is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
