#include "main.h"
/**
*printf_str - function that produces str
*@arg: argument format
*Return:vnumber of bytes printed
*/
int printf_str(va_list arg)
{
	char *str;
	int str_len;
	int i;

	 str = va_arg(arg, char *);
	if (str == NULL)
	{
		str_len = _strlen(str);
		for (i = 0; i < str_len; i++)
			_putchar(str[i]);
		return (str_len);
	}
	else
	{
		str_len = _strlen(str);
		for (i = 0; i < str_len; i++)
			_putchar(str[i]);
		return (str_len);
	}
	va_end(arg);
	return (*str);
}
