#include "my_isneg.h"

void my_isneg(int n)
{
    if (n >= 0)
    {
        my_putchar('P');
    }
    else
    {
        my_putchar('N');
    }

    my_putchar('\n');
}