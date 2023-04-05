#include "main.h"
/**
  * is_prime_number - returns 1 if prime number else 0
  * prime_number - finds a prime number
  * @n: parameter
  * Return: 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}
/**
  * prime_number - finds a prime number
  * @n: parameter
  * @i: parameter
  * Return: 0
  */

int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_number(n, i - 1));
}
