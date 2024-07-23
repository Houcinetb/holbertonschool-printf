#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: character string composed of zero or more directives
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	const char *ptr;

	if (!format)
		return (-1);
	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
				count += _putchar(va_arg(args, int));
			else if (*ptr == 's')
				count += print_string(va_arg(args, char *));
			else if (*ptr == '%')
				count += _putchar('%');
			else if (*ptr == 'd' || *ptr == 'i')
				count += print_number(va_arg(args, int));
			else
				count += _putchar(*ptr);
		}
		else
		{
			count += _putchar(*ptr);
		}
	}
	va_end(args);
	return (count);
}
