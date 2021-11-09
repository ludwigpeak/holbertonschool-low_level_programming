#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *convert(unsigned int num, int base)
{
  static char Representation [] = “0123456789ABCDEF”;
  static char buffer [50];
  char *m;
  m = &buffer [49];
  *m = ’\0’;
  do
    {
      *—m = Representation(num%base];
      num /= base;
    }while (num != 0);
  return (m);
}
