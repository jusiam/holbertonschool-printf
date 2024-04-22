#include "main.h"

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 *
 * Return: number of chars printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	int len = 0, length = 0;

	if (s == NULL)
		s = "(null)";

	while (s[len] != '\0')
	{
		len++;
	}

	length = len;
	len = 0;
	while (len < length)
	{
		_putchar(s[len]);
		len++;
	}
	return (len);
}
