#include <stdio.h>
#include <stdarg.h>



void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i;
    va_list args;
    va_start(args, n);
    
    for (i = 0; i < (int)n; i++)
    {
        if (separator == NULL)
        {
            return;
        }
        printf("%d", va_arg(args, int));
    }
	va_end(args);
	printf("\n");
}
