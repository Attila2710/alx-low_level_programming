#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
