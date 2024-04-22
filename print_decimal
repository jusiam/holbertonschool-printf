#include <stdio.h>
#include "main.h"
/**
 * print_decimal - Prints an integer
 * @args: va_list containing the integer to print
 * Return: number of chars printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int len, length = 0;
	char *str;

	len = length_num(n);
	if (n == INT_MAX || n == INT_MIN)
	{
		return (print_limits_int(n));
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	length = len;
	len--;
	if (n == 0)
	{
		str[0] = '0';
	}
	else
	{
		if (n < 0)
		{
			str[0] = '-';
			n = abs(n);
		}
		while (n != 0)
		{
			str[len--] = (n % 10) + '0';
			n /= 10;
		}
	}
	while (len < length)
	{
		_putchar(str[len]);
		len++;
	}
	free(str);
	return (length);
}

/**
 *length_num - count the number of digit without "-"
 * @number: number
 * Return: number of digits
*/
int length_num(int number)
{
	int len = 1;
	int temp = number;

	if (number < 0)
	{
		len++;
		temp *= -1;
	}
	while (temp > 9)
	{
		len++;
		temp /= 10;
	}

	return (len);
}

/**
 * print_limits_int - function that print limits of int
 * @num: limits to print
 * Return: number of char
*/
int print_limits_int(int num)
{
	char *string;
	int index = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		string = "2147483648";
		while (string[index] != '\0')
		{
			_putchar(string[index]);
			index++;
		}
		return (11);
	}

	if (num == INT_MAX)
	{
		string = "2147483647";
		while (string[index] != '\0')
		{
			_putchar(string[index]);
			index++;
		}
		return (10);
	}
	return (0);
}
