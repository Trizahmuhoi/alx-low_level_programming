#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
putchar(str[index]);
}
putchar('\n');
}
