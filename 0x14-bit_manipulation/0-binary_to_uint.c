#include "main.h"

/**
converts a binary number to an
 */
unsigned int binary_to_
nt(const char *b)
{
	unsigned int x;
	int len, binary;

	if (!b)
		return (0);

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			x += binary;
		}
	}

	return (x);
}

