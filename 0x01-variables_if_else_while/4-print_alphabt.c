#include <stdio.h>
/**
 * main - print a to z except e and q
 *
 * Return: 0 success
 */
int main(void)
{
	char que;

	for (que = 'a'; que <= 'z'; que++)
	{
		if (que != 'e' && que != 'q')
			putchar (que);
	}
	putchar('\n');
	return (0);
}
