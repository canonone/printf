#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - custom printf prototype.
 *  @format: a pointer to a string.
 *  Return: Returns the length of string to the std output.
 */

int _printf(const char *format, ...); /* custom print prototype*/

/**
 * str_len - calculates the length of a string.
 * @strn: a pointer to a string.
 * Return: returns the length of the string.
 */

int str_len(const char *strn); /* returns the length of a string*/
int print_char(char c);
int print_string(const char *str);
#endif
