#include "main.h"

/**
 * check_type - function checks the argument type
 * @c: argument to check type
 * @args: arguments
 * Return: size of argument
 */

int check_type(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += print_char(va_arg(args, int));
	else if (c == 's')
		len += _puts(va_arg(args, char *));
	else if (c == '%')
		len += print_char('%');
	else
	{
		len += print_char('%');
		len += print_char(c);
	}
	va_end(args);
	return (len);
}
