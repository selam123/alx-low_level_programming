#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: the number to be multiplied by y
 * @y: the number to multiply x to the power of
 * Return: the product of x to the powerof y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
