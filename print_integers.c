#include "main.h"

/**
 * print_integer - Print a number in base 10
 * @list: numbers to print in base 10
 *
 * Return: Length of the numbers.
 **/

int print_integer(va_list list)
{
	char *num;

	int size;

	num = int_ascii(va_arg(list, int), 10);

	size = display((num != NULL) ? num : "NULL");

	return (size);
}
