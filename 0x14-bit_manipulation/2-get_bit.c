#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @num: The unsigned long int input.
 * @idx: The index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int num, unsigned int idx)
{
	unsigned int i;

	if (num == 0 && idx < 64)
		return (0);

	for (i = 0; i <= 63; num >>= 1, i++)
	{
		if (idx == i)
		{
			return (num & 1);
		}
	}

	return (-1);
}
