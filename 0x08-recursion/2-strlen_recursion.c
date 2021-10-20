#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @k string
 * Description: using recursion find the string length
 * Return: string length
 **/
int _strlen_recursion(char *k)
{
  if (k[0] == '\0')
return(0);
  if (k[1] == '\0')
    {
      return (1);
    }
  else
    {
      return (_strlen_recursion(&k[1]) + 1);
    }
}
