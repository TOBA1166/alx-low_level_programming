#include "main.h"

/**
 * print_number - print a number using only _putchar and without arrays
 *
 */
void print_number(int n)
{

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n == 0)
        _putchar('0');

    if (n/10)
        print_number(n/10);

    _putchar(n%10 + '0');
}
