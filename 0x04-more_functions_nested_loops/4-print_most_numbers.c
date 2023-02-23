#include "main.h"
/**
* print_most_numbers - prints the numbers,
* from 0 to 9
* followed by a new line.
* Return: 1
*/
void print_most_numbers(void)
{
int ch;

for (ch = 0; ch < 10; ch++)
if (ch != 2 && ch != 4)
{
_putchar(ch + '0');
}
}
_putchar('\n');
}
