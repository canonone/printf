#include "main.h"

/**
 * print_unsigned - Print an unsigned integer
 * @list: Number to print
 *
 * Return: Length of number
 **/

int print_unsigned(va_list list)
{
	char *num;

	int size;

	num = int_ascii(va_arg(list, unsigned int), 10);

	size = display((num != NULL) ? num : "NULL");

	return (size);
}
