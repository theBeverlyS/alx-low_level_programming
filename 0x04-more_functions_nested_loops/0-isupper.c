#include "main.h"

/**
 * _isupper - uppercase characters
 * @ c: check if uppercase 
 *
 * Return 1 if uppercase else return 0
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
