#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points  number to change
 * @index: index of bit to clear
 * Return: 1 is success, -1 is failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
