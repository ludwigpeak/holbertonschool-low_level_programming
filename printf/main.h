#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int __printf(const char *format, . . .);
{
va_list arg;
int prueba;
va_start (arg, format);
prueba = vfprintf (stdout, format, arg);
va_end (arg);
return prueba; 
}

#endif /* MAIN_H */
