#include "main.h"
/**
 * print_triangle - Where size is the size of the triangle
 * @size: If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
