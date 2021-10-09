#include "main.h"

int largest_number (int a, int b, int c)

{
  int largest;

  
  if (a > b && c < a )
    {
      largest = a;
    }
  else  if ( b > a && b > c )
     {
       largest = b;
     }
  else 
    {
      largest = c;
    }

return (largest);

}
