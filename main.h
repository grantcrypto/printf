#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list arg);
int printf_str(va_list arg);
int _strlen(char *str);
int putss(char *str);

#endif
