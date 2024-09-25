#include "my_print_alpha.h"

void my_print_alpha(void)
{
    int start = 97;
    int end = 122;

    while (start <= end)
    {
        my_putchar(start);
        start++;
    }
    my_putchar('\n');
}