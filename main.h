#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define OUTPUT_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
void flush_output(char output[], int *output_index);



#endif
