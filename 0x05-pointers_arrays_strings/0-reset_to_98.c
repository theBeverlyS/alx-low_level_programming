#include "main.h"

/**
 * main - update value to 98
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	n = 98;
	_putchar("n=%d\", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}
