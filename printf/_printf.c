#include <stdio.h>
#include  <stdarg.h>
void _printf(char* , . . . );

//La función printf

char* convertido (unsigned int, int); //convierte int en octal, hexal, etc.

int main ()
{

  _printf(“Hello, World \n %d, 9);

  return 0;

}

void _printf (char* format, . . . )
{
  char *try;
  unsigned int i;
  char *s;

  // inicializa el agurmento Myprintf

  va_list arg;
  va_start (arg, format);

  for(try = format; *try  != ‘ \0’; try++)
    {
      while ( *try != ‘%’ )
	{
	  putchar(*try);
	  try++;
	}
      try++;

      //recopilando y ejecutando argumentos

      switch (*try)
	{
	case ‘c’ > i )va_arg (arg, int); // recopila char
      putchar(i);
      break;

    case ‘d’ : i = va_arg (arg, int); recopila int
					if (i < 0)
					  {
					    i = -i;
					    putchar (’-’);
					  }
      puts(convert(i, 10));
      break;

    case ’o’ : i = va_arg(arg, unsigned int); //recopila representación octal
      puts(convert(i, 8 ));
      break;

    case ’s’ : s = va_arg(arg, char *); //recopila string
      puts(s);
      break;

      chase ’x’ : i = va_arg(arg, unsigned int); // recopila hexadecimal
      puts(convert(i, 16));
      break;
    }
}

//cierre de lista de argumentos necesaria para clean-up
va_end(arg);
}

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
