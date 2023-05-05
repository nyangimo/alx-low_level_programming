#include "main.h"
/**
* binary_to_uint - program to convert binary number to unsigned int
* @b: string that contains the binary number
*
* Return: Converted number
*/
unsigned int binary_to_uint(const char *b)
{
int c;
unsigned int dec_val = 0;
if (!b)
return (0);
for (i = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);
dec_val = 2 * dec_val + (b[c] - '0');
}
return (dec_val);
}
