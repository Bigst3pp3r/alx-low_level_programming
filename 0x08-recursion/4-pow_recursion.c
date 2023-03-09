#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: value to raise
* @y: power
*
* Return: result of the power
*/



int _pow_recursion(int x, int y)
{

if (y < 0)/* Base case: if y is negative, return -1 */
{
return (-1);
}
else if (y == 0) /* Base case: if y is zero, return 1 */
{
return (1);
}
else /* Recursive case: compute x^(y-1) and multiply by x */
{
return (x * _pow_recursion(x, y - 1));
}
}
