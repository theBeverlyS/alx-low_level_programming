#include "main.h"

/**
 * write a function that creates a string followed by a new line
 * @str: function parameter
 */

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0', i++);
	_putchar(str[i]);
	_puthar('\n');
}
