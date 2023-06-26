#include "main.h"
/**
 * puts_half - function that prints half of a string
 * function should print the second half of the string
 * If the number of characters is odd, the function should print...
 * the last n characters of the string, where n =
 * (length_of_the_string - 1) / 2
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
