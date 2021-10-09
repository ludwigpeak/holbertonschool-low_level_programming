#include "main.h"

int largest_number (int a, int b, int c)

{
  int largest;

  
  if (b < c && c < a )
    {
      largest = a;
    }

  else  if ( a > c && b > c )
     {
       largest = b;
     }
  else 
    {
      largest = c;
    }

return (largest);

}
