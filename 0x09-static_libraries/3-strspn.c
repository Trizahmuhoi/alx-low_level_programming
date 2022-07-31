#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: bytes acceoted
 * @accept: character to be searched
 * Return: number of bytes in the intial
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int matchs = 0;
int j;

while (*s)
{
for (j = 0; accept[j] ; j++)
{
if (*s == accept[j])
{
matchs++;
break;
}
else if (accept[j + 1] == '\0')
{
return (matchs);
}
}
s++;
}
return (matchs);
}
