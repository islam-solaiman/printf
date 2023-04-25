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
		print_char(str[i++]);
	return (i);
}
