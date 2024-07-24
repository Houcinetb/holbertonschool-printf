#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct specifier - Struct associating a format specifier with a function
 *
 * @spec: The format specifier character (e.g., 'c' for char, 's' for string)
 *
 * @f: Pointer to the function that handles the specified format
 */
typedef struct specifier
{
	char spec;
	int (*f)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int print_number_helper(unsigned int num);

#endif
