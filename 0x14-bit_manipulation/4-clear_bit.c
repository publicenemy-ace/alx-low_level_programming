#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points to the number to change
 * @index: index of the bit to clear
 * Return: 1 for right outcome, -1 for failed outcome
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
