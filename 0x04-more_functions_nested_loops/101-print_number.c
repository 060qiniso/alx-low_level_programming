#include "main.h"
/**
 * print_number - Write a function that prints an integer
 * @n: print integer
 */
void print_number(int n)
{
	unsigned int num1;

	if (n < 0)
	{
		num1 = -n;
		_putchar('-');
	} else
	{
		num1 = n;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}

	_putchar((num1 % 10) + '0');
}