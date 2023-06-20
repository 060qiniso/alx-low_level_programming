#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */
int main(void)
{
	int q;
	unsigned long num1 = 0, num2 = 1, sum;

	for (q = 0; q < 50; q++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (q == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
