#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: 1 if alphabetic, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'));
}
