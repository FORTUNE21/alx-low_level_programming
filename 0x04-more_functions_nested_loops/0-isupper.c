#include "main.h"

/**
 * _isupper - This function checks for uppercase character
 *
 * @c: ia an ascii character
 *
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
