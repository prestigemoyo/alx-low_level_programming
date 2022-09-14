#include "main.h"

/**
 * _islower - function to check for lowercase
 *
 * @c: is the int that will be used for the argument in the
 * Return: 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
