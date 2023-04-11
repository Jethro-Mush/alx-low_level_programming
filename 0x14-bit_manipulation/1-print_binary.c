#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @num: The unsigned long int number to convert.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int num)
{
	if (num >> 0)
	{
		if (num >> 1)
			print_binary(num >> 1);
		_putchar((num & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
