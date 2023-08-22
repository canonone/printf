#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: a pointer to a string.
 * @...: a variadic arguments.
 * Return: returns the total number of char.
 */

int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += print_char(c);
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, char *);

				count += print_string(str);
			}
			else
			{
				print_char(*format);
				count++;
			}
		}
		else
		{
			print_char(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
