#include "main.h"

/**
 * get_size - Calculates the length to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Length.
 */
int get_size(const char *format, int *i)
{
	int current_i = *i + 1;
	int length = 0;

	if (format[current_i] == 'l')
		length = S_LONG;
	else if (format[current_i] == 'h')
		length = S_SHORT;

	if (length == 0)
		*i = current_i - 1;
	else
		*i = current_i;

	return (length);
}
