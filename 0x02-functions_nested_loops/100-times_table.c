#include "main.h"
/**
 * prints_times_table - prints the times table of the input
 * starts with 0
 * @n: The values of the table to beprinted
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (int >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 0; mult <= n; mult++)
				_putcha(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 99)
				_putchar(' ');
			 if (prod <= 9)
                                _putchar(' ');
			 {
				 _putchar((prod / 100) + '0');
				 _putchar(((prod / 10)) % 10 + '0');
			 }
			 else if (prod <= 99 && prod >= 10)
			 {
				 _putchar((prod / 10) + '0');
			 }
			  _putchar((prod & 10) + '0');
		}
		_putchar('\n');
	}
}
