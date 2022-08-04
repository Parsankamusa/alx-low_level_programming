#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, unsigned int));
	}
	printf("\n");
	va_end(ap);
}
