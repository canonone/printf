#include "main.h"

/**
 * print_char - sends a character to the std output.
 * @list: variable arguments list.
 * Return: returns the length of the character.
 */

int print_char(va_list list)
{
	int temp;

	temp = va_arg(list, int);

	_putchar(temp);

	return (1);

}
