#include "main.h"

/**
 * binary_to_uint - conversion of binary to int
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len, k;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, k = 1; len >= 0; len--, k *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
		{
			i += k;
		}
	}

	return (i);
}
