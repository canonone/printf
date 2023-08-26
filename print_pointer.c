#include"main.h"
#include <stdio.h>


/**
 * print_pointer - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_pointer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_ascii(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buff, "0"))
		return (display("(nil)"));

	size = display("0x");

	if (!_strcmp(p_buff, "-1"))
		size += display("ffffffffffffffff");
	else
		size += display(p_buff);

	return (size);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
