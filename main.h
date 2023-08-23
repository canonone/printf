#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *, ...);


int display(char *);
int str_len(const char *);
char *int_ascii(long int, int);


int print_char(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_integer(va_list);
int print_unsigned(va_list);


int handle(const char *, va_list);
int handle_percent(const char *, va_list, int*);


int _putchar(char);
int buffer(char);


/**
 * struct _format - Typedef struct.
 * @type: format specifiers.
 * @f: funtion pointer to the specifier function.
 *
 */

typedef struct _format
{
	char type;
	int (*f)(va_list);

} format;


#endif
