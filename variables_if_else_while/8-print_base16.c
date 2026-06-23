#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0
 */
int main(void)

{
int i;
for (i = '0'; i <= 'f'; i++)
{

if (i > '9' && i < 'a')
{
i = 'a';
}

putchar(i);
}
putchar('\n');
return (0);
}
