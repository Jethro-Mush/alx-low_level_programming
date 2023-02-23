/*
 * File: 0-isupper.c
 * Author: Jethro M
 */

#include "main.h"

/**
 * C PROGRAMMING
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
