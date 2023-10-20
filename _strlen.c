#include "main.h"
/**
 * _strlen - print string lenght
 * @str: string
 * Return: string lenght
 */
int _strlen(char *str)
{
	int length;

	while (length != '\0')
	{
		length++;
		str++;
	}
		return (length);
}
