#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: int type number
 * Return: return value of last digit
 */
int print_last_digit(int i)
{
	int iv;

	if (i < 0)
	{
		iv = -1 * (i % 10);
		_putchar(iv + '0');
		return (iv);
	}
	else
	{
		iv = i % 10;
		_putchar(iv + '0');
		return (iv);
	}
}
