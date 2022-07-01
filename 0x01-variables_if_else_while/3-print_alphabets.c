<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Printing the alphabet
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);
	putchar ('\n');
	return (0);
}
=======
#include <stdio.h>

/**
 * main - Printing the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar (letter);

	putchar ('\n');

	return (0);
}
>>>>>>> fb4d8c1eb764ad2fa3bed04f3855e513f99961ed
