#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

typedef struct d_type
{
	char id;
	void (*func)(va_list arg);
} d_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
