#include "main.h"
/**
 * _isalpha - function to check is your papa is alpha
 * @c: c is the int that will check your papa
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
