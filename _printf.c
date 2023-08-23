#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: a pointer to a string.
 * @...: a variadic arguments.
 * Return: returns the total number of char.
 */

int _printf(const char *format, ...)
{
	int size;

	va_list args;

	if (format == NULL)
		return (-1);

	size = str_len(format);

	if (size <= 0)
		return (0);

	va_start(args, format);

	size = handle(format, args);

	_putchar(-1);

	va_end(args);

	return (size);
}
