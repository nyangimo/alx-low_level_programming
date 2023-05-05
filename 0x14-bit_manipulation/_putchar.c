#include "main.h"
#include <unistd.h>
/**
* _putchar - program writing the character C to stdout
* @c: Character to be printed
*
* Return: 1 On success 
* On error return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
