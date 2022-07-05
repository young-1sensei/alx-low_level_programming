#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @e: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int e)
{
	if ((e >= 'A' && e <= 'Z') || (e >= 'a' && e <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
