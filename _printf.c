#include  "main.h"
#include <unistd.h>

/**
 * _printf - function that produces output according to a format.
 * @format: first argument - array of char represent the type.
 * Return:  number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, count, len;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	count = _strlen(format);
	va_start(args, format);

	if (count <= 0)
		return (0);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = check_type(format[i + 1], args);
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (len);


}
