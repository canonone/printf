#include "main.h"

/**
* handle - controls the format.
* @str: pointer to a string.
* @list: variable arguments list.
* Return: size of arguments and size of format string.
*/

int handle(const char *str, va_list list)
{
	int size, i, temp;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			temp = handle_percent(str, list, &i);
			if (temp == -1)
				return (-1);

			size += temp;
			continue;
		}

		_putchar(str[i]);
		size += 1;
	}

	return (size);

}

/**
* handle_percent - handles what happens to the percent format.
* @str: pointer to a string.
* @list: variable argument list.
* @i: iterates over the current character in format.
* Return: returns the size of elements displayed.
*/

int handle_percent(const char *str, va_list list, int *i)
{
	int size, j, amount_formats;

	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	amount_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < amount_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
