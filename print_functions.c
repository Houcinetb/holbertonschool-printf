#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 *
 * @str: The string to print
 *
 * Return: The number of characters printed
 */

int print_string(char *str)
{
	int count = 0;

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
 * print_number - prints an integer
 *
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */

int print_number(int n)
{
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
	if (num / 10)
		count += print_number(num / 10);
	_putchar((num % 10) + '0');
	count++;
	return (count);
}
