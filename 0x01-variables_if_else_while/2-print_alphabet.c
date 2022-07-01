#include <stdio.h>

/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (ones = tens + 1; ones <= 9; ones++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar (tens + '0');
		putchar (tens + '0');

		if (tens < 8)
		{
			putchar (',');
			putchar (',');
		}
		}
	}
	putchar ('\n');
	return (0);
}
