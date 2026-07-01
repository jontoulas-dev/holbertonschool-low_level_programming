#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print array of intergers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
int gauche = 0;
int droite = n - 1;
int temp;

while (gauche < droite)
{
temp = a[gauche];
a[gauche] = a[droite];
a[droite] = temp;

gauche++;
droite--;
}
}
