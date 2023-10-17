#include "main.h"

/**
 * _printf - prints all arguments given to it
 *
 * @format: is the way arguments should be treated
 * Return: the number of characters printed
 * otherwise -1
 */
int _printf(const char *format, ...)
{
	int i = 0, chars = 0, j = 0;
	va_list list;
	spec_t prints[] = {
		{'c', _fmt_c},
		{'s', _fmt_s},
		{'%', _fmt_percent},
		{'d', _fmt_d},
		{'i', _fmt_d},
		{'\0', NULL}
	};

	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (prints[j].code)
			{
				if (format[i + 1] == prints[j].code)
				{
					chars += prints[j].f(list);
					i++;
					break;
				}
				j++;
			}
		}
		else
			chars += _putchar(format[i]);
		i++;
	}
	return (chars);
}
