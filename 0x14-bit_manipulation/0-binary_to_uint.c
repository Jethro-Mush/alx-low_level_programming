#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 *
 * @b: A pointer to the binary string to be converted.
 *
 * Return: The unsigned integer equivalent of the binary string, or 0 if the input string
 *         is NULL or if it contains any non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	/* If the input string is NULL, return 0 */
	if (!b)
		return (0);

	ui = 0;

	/* Determine the length of the binary string */
	for (len = 0; b[len] != '\0'; len++)
		;

	/* Convert the binary string to an unsigned integer */
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		/* If the string contains any non-binary characters, return 0 */
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		/* If the current binary digit is 1, add the corresponding power of 2 to the unsigned integer */
		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}

