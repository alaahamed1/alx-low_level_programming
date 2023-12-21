#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    while (n > 0) {
        if (n <= 0) {
            _putchar('\n');
            return;
        }
        _putchar('\\');
        n--;
    }
    _putchar('\n');
}
