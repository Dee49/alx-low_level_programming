#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @x: The number to be checked
 * Return: 1 for a digit or 0 for otherwise
 */

int _isdigit(int x)

{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);

}
