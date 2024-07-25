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
	va_list args;
	int i = 0, j, printed_chars = 0;

	spec_t specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{0, NULL}
	};
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; specs[j].spec; j++)
			{
				if (format[i] == specs[j].spec)
				{
					printed_chars += specs[j].f(args);
					break;
				}
			}
			if (!specs[j].spec)
			{
				write(1, &format[i], 1);
				printed_chars++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
