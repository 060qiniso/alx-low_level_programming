#include <stdio.h>
/**
 * main - prints all possible combination of 2 two-digit numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int q;
	int r;

	for (q = 0; q < 100; q++)
	{
		for (r = 0; r < 100; r++)
		{
			if (q < r)
			{
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				putchar(' ');
				putchar((r / 10) + 48);
				putchar((r % 10) + 48);
				if (q != 98 || r != 99)
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
