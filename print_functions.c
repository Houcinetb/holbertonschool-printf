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

	write(1, &c, 1);
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
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
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

/**
 * print_int - Prints an integer
 *
 * @args: The list of arguments
 *
 * Return: The number of characters printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	char buffer[20];
	int i = 0, j, len = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
		len++;
	}
	else
	{
		num = n;
	}
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		len++;
	}
	return (len);
}
