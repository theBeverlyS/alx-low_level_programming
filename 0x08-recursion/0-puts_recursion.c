#include "main.h"

/**
  * _puts_recursion - print a string then a new line
  *
  * @s: string to be printed
  *
  * Return: Always 0.
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}
