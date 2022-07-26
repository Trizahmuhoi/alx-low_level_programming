#include "main.h"
/**
 * _strncpy - copy two strings to be concatenated on
 * @dest: input value to be appended upon
 * @src: input value at the end of dest
 * @n: input value to compare
 *
 * Return: returns new concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != ('\0'))
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = ('\0');
j++;
}

return (dest);
}
