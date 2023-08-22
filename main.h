#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int str_len(const char *strn); 
int print_char(char c);
int print_string(const char *str);

#endif
