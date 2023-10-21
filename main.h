#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int putss(char *str);
int printf_dec(va_list arg);
int printf_int(va_list arg);
int print_id(char *format, ...);

#endif
