#include "main.h"

/**
 * _isalpha * Checks for alphabet character
 * @c: the character to be checked
 * Return; 1 for alphabet character otherwise 0
 */

int _islapha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z'))
	{
		return (1);
	}
	{
		return (0);
	} 
