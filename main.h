#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * struct specifier - select the function to use
 * based on format
 *
 * @code: the character string
 * @f: function pointer to be called
 */
typedef struct specifier
{
	char code;
	int (*f)(va_list ap);
} spec_t;

int _printf(const char *format, ...);

int _fmt_c(va_list);
int _fmt_s(va_list);
int _fmt_d(va_list);
int _fmt_percent(va_list);

int _putchar(char c);
int _puts(char *s);
int _isneg(int number);
int _convertneg(int number);
int _finddigits(int number);
char *itoa(int number, int isneg);
int print_number(int number);



#endif
