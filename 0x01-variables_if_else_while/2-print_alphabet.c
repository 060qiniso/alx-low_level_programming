#include <stdio.h>
/**
 * main - output function
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghigklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar ('\n');
	return (0);
}
