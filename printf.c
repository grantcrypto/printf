#include "main.h"
/**
 *_printf - function that produces output according to a format
 *@format: format specifier
 *Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int ch_print, str_count, str_len = 0;
	va_list list_of_args;

	va_start(list_of_args, format);
	for (ch_print = 0; format[ch_print] != '\0'; ch_print++)
	{
		if (format[ch_print] != '%')
		{
			_putchar(format[ch_print]);
		}
		else if (format[ch_print + 1] == 'c')
		{
			_putchar(va_arg(list_of_args, int));
			ch_print++;
		}
		else if (format[ch_print + 1] == 's')
		{
			str_count = putss(va_arg(list_of_args, char *));
			ch_print++;
			str_len += (str_count - 1);
		}
		else if (format[ch_print + 1] == '%')
		{
			_putchar('%');
		}
		str_len += 1;
	}
	va_end(list_of_args);
	return (str_len);
}
