#include "main.h"

/**
 * _printf - print output according to the format
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list list;

	if (format == NULL)
		return (-1);

	i = _strlen(format);
	if (i <= 0)
		return (0);

	va_start(list, format);
	i = handler(format, list);

	_putchar (-1);
	va_end(list);

	retunr(i);
}
