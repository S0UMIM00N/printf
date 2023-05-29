#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>

#define OUTPUT_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
void flush_output(char output[], int *output_index);
int printf_char(va_list handle);
int printf_string(va_list handle);

#endif
