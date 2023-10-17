#include "main.h"

/**
 * _fmt_c - prints character arguments
 *
 * @list: the variadic list
 * Return: 1 or -1
 */
int _fmt_c(va_list list)
{
	char i = va_arg(list, int);

	return (_putchar(i));
}

/**
 * _fmt_s - prints any given word as argument
 *
 * @list: the variadic list
 * Return: the number of characters
 * otherwise, -1
 */
int _fmt_s(va_list list)
{
	char *word = NULL;

	word = va_arg(list, char *);
	return (_puts(word ? word : "(null)"));
}

/**
 * _fmt_percent - prints percentage
 *
 * @list: variadic list
 * Return: 1 on success
 */
int _fmt_percent(va_list list)
{
	(void)list;

	return (_putchar('%'));
}
