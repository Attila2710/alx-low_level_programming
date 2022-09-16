#include "main.h"

/**
 * _isupper - Checks if a character is uppercase or not
 * @c: character to be tested
 *
 * Return: 1 whether it is, 0 otherwhise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}


	
