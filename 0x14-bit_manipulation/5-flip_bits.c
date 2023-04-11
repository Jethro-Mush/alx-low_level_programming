#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			num_bits++;
		}

		n >>= 1;
		m >>= 1;
	}

	return (num_bits);
}
