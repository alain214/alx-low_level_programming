#include "main.h"

/**
 * set_bit - sets the value of a specific bit to 1.
 * at a given index.
 * @n: pointer to an unsigned long integer.
 * @index: the index of the bit to be set.
 *
 * Return: 1 if the bit was set successfully, -1 if it wasn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}

