#include "main.h"

/**
 * _fmt_d - function pointer for digits
 *
 * @list: the variadic list
 * Return: the number of characters printed
 */
int _fmt_d(va_list list)
{
	return (print_number(va_arg(list, int)));
}
