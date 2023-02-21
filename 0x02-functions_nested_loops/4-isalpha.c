#include "main.h"
/**
 * checks for alphabetic character.
 * Return: 1 for alphabetic character else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c >= 97 && c <=122))
	{
		return (1);
	}
	return(0);
}
