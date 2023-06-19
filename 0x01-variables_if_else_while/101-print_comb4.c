#include <stdio.h>
/**
 * main - print all possible combination of 3 digits
 *
 * Return: 0 success
 */
int main(void)
{
	int q;
	int r;
	int s;

	for (q = 48; q < 58; q++)
	{
		for (r = 49; r < 58; r++)
		{
			for (s = 50; s < 58; s++)
			{
				if (s > r && r > q)
				{
					putchar(q);
					putchar(r);
					putchar(s);
					if (q != 55 || r != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
