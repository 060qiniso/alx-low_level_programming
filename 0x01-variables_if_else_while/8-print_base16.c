#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0 success
 */
int main(void)
{
	int num;
	char alphNum[] = "0123456789abcdef";

	for (num = 0; num <= 16; num++)
	{
		putchar(alphNum[num]);
	}
	putchar('\n');
	return (0);
}
