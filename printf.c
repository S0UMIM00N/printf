#include "main.h"

void flush_output(char output[], int *output_index);

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int printed_chars = 0;
	int output_index = 0;
	char output[OUTPUT_SIZE];

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			output[output_index++] = *format;
			if (output_index == OUTPUT_SIZE)
				flush_output(output, &output_index);
			printed_chars++;
		}
		else
		{
			flush_output(output, &output_index);
			format++;
			if (*format == '\0')
				break;

			/* Handle the format specifier */
			/* (implement your logic here) */
		}
	}

	flush_output(output, &output_index);

	va_end(arg_list);

	return (printed_chars);
}

/**
 * flush_output - writes the contents of the output buffer
 * @output: character array buffer to be written
 * @output_index: index at which to add next char, represents the length
 */
void flush_output(char output[], int *output_index)
{
	if (*output_index > 0)
	{
		write(1, output, *output_index);
		*output_index = 0;
	}
}
