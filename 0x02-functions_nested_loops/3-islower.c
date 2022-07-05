#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int e)
{
	if (e >= 'a' && e <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
