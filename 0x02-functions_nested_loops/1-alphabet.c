#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}