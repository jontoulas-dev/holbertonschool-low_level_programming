#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print table of 9
 *@n: nombre qui cherche ç_
 *
 *
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
{
printf("%d ,", n);
}
for (; n > 98; n--)
{
printf("%d ,", n);
}
}
printf("%d\n", 98);
}
