#include "main.h"
#include <unistd.h>

/**
* _putchar - write thecharacter c to standout
* @c: The character to print
*
* Return: 1 on success
* return: -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
