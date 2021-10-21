#include "main.h"
/**
 * primo - determine if n is a prime
 * @n : test case
 * @i : recurring factor
 * Description :determine if n is a prime using two parameters
 * Return: 1 if n is a prime, 0 if not
 **/
int primo(int n, int i)
{
if (n % i == 0)
return (0);
else if (n >= (i + 1) * (i * 1))
return (primo(n, i + 1));
return (1);
}
/**
 * is_prime_number - determine if n is a prime number
 * @n: number to verify
 * Description: determine if n is a prime
 * Return: 1 if n is prime, 0 if not
 **/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (primo(n, 2));
}
