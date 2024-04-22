#include "main.h"

/**
 * get_functions - selects the correct function to perform the operation
 * @s: The format specifier
 *
 * Return: Pointer to the function that corresponds to the specifier
 */

int (*get_functions(const char *s))(va_list)
{
	cheking_spec cs[] = {
		{'d', print_decimal},
		{'i', print_decimal},
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{0, NULL}
	};

	int index;

	for (index = 0; cs[index].format; index++)
	{
		if (*s == cs[index].format)
		{
			return (cs[index].ptr_functions);
		}
	}

	return (NULL);
}
