#include "main.h"


/**
 * main - prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
		int c;

		char abe[8] = "_putchar";

		for (c = 0; c < 8; c++)
		{
			_putchar(abe[c]);
		}
		_putchar('\n');
		return (0);
}
