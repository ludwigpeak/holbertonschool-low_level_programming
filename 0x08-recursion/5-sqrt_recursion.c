#include "main.h"
/**
 * sqr_rt - find square root of n
 * @n: number to square
 * @i:test case for root
 * Description: find square root of n using recursion and two variables
 * Return: square foot of n or -1 if not
 **/
int sqr_rt(int n, int i)
{
if (n == i * i)
return (i);
else if (n < i * i)
return (-1);
return (sqr_rt(n, i + 1));
}
/**
 * _sqrt_recursion - find natural square foor of n
 * @n: number to square
 *Description: find natural square root of n using recursion
 *Return: square root of n or -1 if not
 **/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqr_rt(n, 0));
}
