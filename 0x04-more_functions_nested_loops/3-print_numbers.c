#include "main.h"

/**
 * print-number - 0-9
 * return: void
 */

void print-numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
