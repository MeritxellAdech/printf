#include "main.h"

/**
 * _putchar - prints any given character passed to it
 *
 * @c: the given character
 * Return: 1 on success or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints the string
 *
 * @s: the given string
 * Return: the number of characters
 */
int _puts(char *s)
{
	int i = 0, chars = 0;

	while (s[i])
	{
		chars += _putchar(s[i]);
		i++;
	}

	return (chars);
}

