#include "main.h"
/**
 * get_bit - Prints the value of a bit at an index in a decimal number
 * @n: number to be searched
 * @index: index of the bit
 *
 * Return:the value of the bit at index index or -1 if an error occured 
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
