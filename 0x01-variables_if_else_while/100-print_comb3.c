#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		if (!((ones == ones) || (ones > ones)))
		{
			putchar(tens);
			putchar(tens);
			if (!(ones == '9' && tens == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
