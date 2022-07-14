#include "main.h"
/**
 * _strncat - concatenate two strings pointed to
 * using at most n bytes from src
 * @dest: input value
 * @src: string that will be concatenated on
 * @n: input value
 *
 * Return: returns pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
