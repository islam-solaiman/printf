#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int _putchar(char c);
int _strlen(const char *s);
int _puts(char *str);
int     print_percent(void);
int check_type(char c, va_list args);
int _printf(const char *format, ...);

#endif
