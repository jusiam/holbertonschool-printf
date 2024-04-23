#include "main.h"
#include <stdarg.h>
/**
 * _printf - create printf
 * @format: The format str
 *
 * Return: The number of char printed
 */
int _printf(const char *format, ...)
{va_list args;
int count = 0;
const char *ptr = format;
int (*func_p)(va_list) = NULL;
if (format == NULL)
return (-1);
va_start(args, format);                          /* Start var */
 while (*ptr)
{
if (*ptr != '%')
{_putchar(*ptr);                          /* Print the char */
count++;
}
else
{ptr++;                                   /* Move to next char */
if (*ptr == '\0')                        /* If next char is NULL */
return (-1);                         /* Return -1 */
func_p = get_func(*ptr);                 /* Get function pointer */
if (func_p != NULL)
count += func_p(args);               /* Call function and update count */
else
{
if (*ptr == 's')                     /* If specifier is 's' */
count += print_string(args);
else if (*ptr == 'c')
count += print_character(args);
else if (*ptr == '%')                /* If specifier is '%' */
count += print_percent(args);
else if (*ptr == 'd' || *ptr == 'i') /* If specifier is 'd' or 'i' */
count += print_integer(args);
else                                 /* If unknown specifier */
{_putchar('%');                   /* Print '%' */
_putchar(*ptr);                  /* Print specifier char */
count += 2; }}}
ptr++; }
va_end(args);
return (count); }
