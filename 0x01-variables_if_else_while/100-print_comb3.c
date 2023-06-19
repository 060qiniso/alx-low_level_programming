#include <stdio.h>
/**
 * main - print output
 *
 * Return: 0 success
 */
int main(void)
{
	int q;
	int s;

	for (q = 48; q <= 56; q++)
	{
		for (s = 49; s <= 57; s++)
		{
			if (s > q)
			{
				putchar(q);
				putchar(s);
				if (q != 56 || s != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
