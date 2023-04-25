
#include "main.h"

/**
 *  _puts -  function that prints a string, followed by a new line, to stdout.
 *  @str: String to be printed.
 *  Return: number of characters printed.
 */

int _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	return (i);
}


#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string to be passed as a parametter
 *  Return: length of a string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
		len += _putchar(va_arg(args, int));
	else if (c == 's')
		len += _puts(va_arg(args, char *));
	else if (c == '%')
		len += _putchar('%');
	else
	{
		len += _putchar('%');
		len += _putchar(c);
	}
	va_end(args);
	return (len);
}

