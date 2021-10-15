#include "main.h"
#include <stdio.h>
/**
 * leet - convert string to leet speak
 * @c: string to convert
 * Description: replaces a, e, o, and t with 4, 3, 0, 7, and 1 respectively
 * Return: string c
 **/
char *leet(char *c)
{
  int i, j;
  char *k;
  k = "aAeEoOtTlL4433007711";
  for (i = 0; c[i] != '\0'; i++)
    {
      for (j = 0; j<= 9; j++)
	{
	  if (c[i] == k[j])
	    c[i] = k[j + 10];
	 
	}
    }
  return (c);
}
