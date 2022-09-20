#include "main.h"

/**
 * _puts - print a string followed by a new line
 * *@str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}

