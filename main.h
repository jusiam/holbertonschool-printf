#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct type - Struct used for stock type detected.
 * @letter: Will contain type.
 * @f: The function associated for each type.
*/

typedef struct type
{
	char letter;
	int (*f)();
} check_t;

int _printf(const char *format, ...);

/* Specifiers functions */
int print_c(va_list args);
int print_s(va_list args);
int print_percent(void);
int print_d(va_list args);
int print_i(va_list args);

/* Helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif
