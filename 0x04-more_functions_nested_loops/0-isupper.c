#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char checking uppercase
 *
 * Return 1 otherwise 0
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
