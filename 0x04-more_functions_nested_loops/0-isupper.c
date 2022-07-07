include "main.h"

/**
 * _isupper - cihecks for uppercase characters
 * @c: character
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
