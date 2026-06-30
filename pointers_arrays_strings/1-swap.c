#include "main.h"
#include <stdio.h>

/**
 * swap_int - Change a to b
 * @a: Value to swap with b
 * @b: Value to swap with a
 *
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
