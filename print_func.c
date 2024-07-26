#include "main.h"

/**
 * print_char - Prints a character
 *
 * @args: The list of arguments
 *
 * Return: The number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string
 *
 * @args: The list of arguments
 *
 * Return: The number of characters printed
 */

int print_string(va_list args)
{
	int i, len;
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}

/**
 * print_percent - Prints a percent sign
 *
 * @args: The list of arguments
 *
 * Return: The number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}
