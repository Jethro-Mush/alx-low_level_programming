#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *             at a given index.
 * @num: pointer to an unsigned long int.
 * @index: index of the bit to clear.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	if (*num & mask)
		*num ^= mask;

	return (1);
}

