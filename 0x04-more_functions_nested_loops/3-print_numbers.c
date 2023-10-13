#include "main.h"

/**
 * print_numbers - print 0-9
 * return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = '48'; c < '58'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
