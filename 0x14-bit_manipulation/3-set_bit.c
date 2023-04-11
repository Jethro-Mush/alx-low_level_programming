#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @num_ptr: Pointer to an unsigned long int.
 * @idx: Index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *num_ptr, unsigned int idx)
{
	unsigned int mask;

	if (idx > 63)
		return (-1);

	mask = 1 << idx;
	*num_ptr = (*num_ptr | mask);

	return (1);
}
