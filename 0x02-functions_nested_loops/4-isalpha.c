#include "main.h"
/**
 * _is_alpha - function to check is your papa is alpha
 * @c: c is the int that will check your papa
 * Return: 0
 */
int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
