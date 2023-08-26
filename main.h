#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *, ...);


int display(char *);
int str_len(const char *);
char *int_ascii(long int, int);

int print_hexadecimal_low(va_list);
int print_char(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_integer(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);
int print_rot(va_list);
int print_hexadecimal_up(va_list);

int handle(const char *, va_list);
int handle_percent(const char *, va_list, int*);


int _putchar(char);
int buffer(char);

int _strcmp(char *, char *);
char *string_to_upper(char *);
int is_lowercase(char);
int rot13(char *);


/**
 * struct _format - Typedef struct.
 * @type: format specifiers.
 * @f: funtion pointer to the specifier function.
 *
 */

typedef struct _format
{
	char spec;
	int (*f)(va_list);

} format;


#endif
