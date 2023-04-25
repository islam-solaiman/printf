#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number to be printed.
 */

int print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		print_char('-');
		n *= -1;
	}

	n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);

	print_char(n1 % 10 + '0');
	return;
}

/**
 * int_len - function counts the length of int
 * @n: integer
 * Return: length
 */

int	int_len(int n)
{
	int		len;

	len = print_number(n);
	return (len);
}

