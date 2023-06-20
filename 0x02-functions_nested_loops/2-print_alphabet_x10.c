#include "main.h"
/**
 * print_alphabet_x10 - function that print 10 times the alphabet,in lowercase
 */
void print_alphabet_x10(void)
{
	char charecterName;
	int q = 0;

	while (q < 10)
	{
		charecterName = 'a';
		while (charecterName <= 'z')
		{
			_putchar(charecterName);
			charecterName++;
		}
		_putchar('\n');
		q++;
	}
}
