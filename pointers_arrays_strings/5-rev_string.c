#include "main.h"
#include <stdio.h>

/**
 * rev_string - rev computes the length of a string
 * @s: the string to measure
 *
 */
void rev_string(char *s)
{
int debut;
int fin;
char tempo;

fin = 0;
while (s[fin] != '\0')
{
fin++;
}
fin--;

debut = 0;

while (debut < fin)
{

tempo = s[debut];
s[debut] = s[fin];
s[fin] = tempo;

debut++;
fin--;
}
}
