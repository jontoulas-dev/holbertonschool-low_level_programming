#include "main.h"

/**
* _islower - Verifie si un caractère est en minuscule.
* @c: ce qui faut tester.
* Return: void.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
