#include "main.h"
/**
 * _strncpy - C function that copies a string
 * @des: buffer storing the string copy
 * @src: the source string
 * *n: number maximun copied
 * Return: returns
 */

int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
