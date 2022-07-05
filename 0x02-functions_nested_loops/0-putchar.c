#include "main.h"

/**
 *  Main - print putchar
 *
 *  Return: Always 0
 */
int main(void)
{
		int c;

		char abe[] = "_putchar";
		for (c = 0; c < 8; c++)
		{
			_putchar(abe[c]);
		}
		_putchar('\n');
		return (0);
}
