#include "main.h"

/*
 * get_bit - return the value of a given index
 * @n: number to search
 * @index:is the index,starting from 0 of the bit
 *
 * return: the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
