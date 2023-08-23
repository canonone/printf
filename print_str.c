#include "main.h"

/**
 * print_string - sends a string to std output for case of %s.
 * @list: variable argument list.
 * Return: returns the length of the string.
 */

int print_string(va_list list)
{
	char *str;
	int str_len;

	str = va_arg(list, char*);
	str_len = display((str != NULL) ? str : "(null)");

	return (str_len);
}
