include "main.h"

/**
 * _isupper - cihecks for uppercase characters
 * @c: character
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
