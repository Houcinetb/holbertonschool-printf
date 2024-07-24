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
	int i;

	specifier_t specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};
	if (!format)
		return (-1);
	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			for (i = 0; specs[i].spec != '\0'; i++)
			{
				if (*ptr == specs[i].spec)
				{
					count += specs[i].f(args);
					break;
				}
			}
			if (specs[i].spec == '\0')
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
