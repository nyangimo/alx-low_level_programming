#include "main.h"
/**
* get_endianness - for checking if a machine is little or big endian
* Return: 0 for big and 1 for little
*/
int get_endianness(void)
{
unsigned int z = 1;
char *c = (char *) &z;
return (*c);
}
