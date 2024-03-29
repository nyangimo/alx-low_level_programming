#include "main.h"
/**
* set_bit - program that sets a bit at a given index to 1
* @n: The pointer to the number to change
* @index: Sets index of  the bit to 1
*
* Return: for success return 1 and -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
