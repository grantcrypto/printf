#include "main.h"
/**
 *print_id - print character format
 *@format: format specifier
 *Return: int
 */
int print_id(char *format, ...)
{
	int c = 0;
	int t;
	int d = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		int num = va_arg(args, int);

		if (*format == '%' && ((*format + 1) == 'd' || *(format + 1) == 'i'))

		while (t != 0)
		{
			t /= 10;
			d++;
		}
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
			d++;
		}
		t = 1;
		while (--d > 0)
		{
			t *= 10;
		}
		while (t > 0)
		{
			char d = num / t + '0';

			write(1, &d, 1);
			num %= t;
			t /= 10;
			c++;
		}
		if (format += 2)
		{
		write(1, format, 1);
		c++;
		}
	format++;
	}

	va_end(args);
	return (c);

}
