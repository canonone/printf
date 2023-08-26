#include "main.h"

/**
 * print_octal - Print a number in base 8.
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_ascii(va_arg(list, unsigned int), 8);

	size = display((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
