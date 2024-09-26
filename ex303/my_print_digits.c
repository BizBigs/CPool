#include "my_print_digits.h"

void my_print_digits()
{
    int start = 48;
    int end = 57;

    for (int i = start; i <= end; i++)
    {
        my_putchar(i);
    }
}