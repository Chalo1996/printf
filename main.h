#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

char *itoa(long int, int);

/**
 * struct types - specifier structure for printf
 * @ch: pointer to char specifiers
 * @func_ptr : pointer to va_list functuions.
 *
 */

typedef struct types
{
	char ch;
	int (*func_ptr)(va_list);
} print_func;

int print_c(va_list c);
int print_string(va_list s);
int (*func(const char a))(va_list);
int print_num(va_list n);
int _printf(const char *format, ...);
int _putchar(char c);
int octal(va_list n);
int _atoi(char *s);
int rot13(va_list s);
int rev_string(va_list args);
int binary(va_list num);
int buffer(char c);

int print(char *);
int _strlen(const char *);

#endif /* MAIN_H */
