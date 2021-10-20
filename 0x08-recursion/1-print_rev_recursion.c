#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse
 * @r: string to print
 * Description: prints a sting in reverse
 * Return: nothing
 **/
void _print_rev_recursion(char *r)
{
if (r[0] == '\0')
return;
if (r[1] != '\0')
{
_print_rev_recursion(&r[1]);
_putchar(r[0]);
}
else
{
_putchar(r[0]);
}
}
