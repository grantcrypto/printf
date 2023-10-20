#include "main.h"
/**
 * putss - print string
 * @str: string
 * Return: number of bytes
 */
int putss(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (*str);
}
