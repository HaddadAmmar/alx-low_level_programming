#include <stdio.h>
/**
* _puts - prints a string, followed by a new line, to stdout
* @str: the string to be printed
*
* Return: void
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
