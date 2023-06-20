#include "main.h"

/**
 * _lslower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _lslower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
