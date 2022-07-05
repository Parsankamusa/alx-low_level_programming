#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
