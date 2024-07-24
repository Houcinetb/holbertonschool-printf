#include "main.h"

/**
 * print_char - prints a character
 *
 * @args: va_list containing the character to print
 *
 * Return: The number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string
 *
 * @args: va_list containing the string to print
 *
 * Return: The number of characters printed
 */

int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_percent - prints a percent sign
 *
 * @args: va_list
 *
 * Return: The number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_number_helper - Recursively prints each digit of an integer
 *
 * @num: The integer to print
 *
 * Return: The number of characters printed
 */

int print_number_helper(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += print_number_helper(num / 10);
	_putchar((num % 10) + '0');
	count++;
	return (count);
}

/**
 * print_number - prints an integer
 *
 * @args: va_list containing the integer to print
 *
 * Return: The number of characters printed
 */

int print_number(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}
	count += print_number_helper(num);
	return (count);
}
