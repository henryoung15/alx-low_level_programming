#include "main.h"
/**
 *_islower - function to check the code
 *@c: is the int that will be used for argument of the function
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
