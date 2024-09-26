#include "my_print_revalpha.h"

void my_print_revalpha(void)
{
    int start = 97;
    int end = 122;

    while (end >= start)
    {
        my_putchar(end);
        end--;
    }
    my_putchar('\n');
}