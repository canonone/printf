#include "main.h"

/**
 * print_string - sends a string to std output for case of %s.
 * @str: a pointer to a string.
 * Return: returns the length of the string.
 */

int print_string(const char *str)
{
	write(1, str, str_len(str));
	return (str_len(str));

}
