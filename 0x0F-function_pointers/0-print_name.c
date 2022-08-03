#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name character
 * @f: function pointer
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
