#include "my_print_comb.h"

void my_print_number(int *i1, int *i2, int *i3)
{
    my_putchar(*i1);
    my_putchar(*i2);
    my_putchar(*i3);
    if (!(*i1 == 55 && *i2 == 56 && *i3 == 57))
    {
        my_putchar(',');
    }
    else
    {
        my_putchar('\n');
    }
}

void my_print_comb()
{
    int min_ascii_nb = 48;
    int max_ascii_nb = 57;

    int i1 = 48;
    int i2 = 49;
    int i3 = 50;

    while (i1 <= max_ascii_nb - 2)
    {
        i2 = i1 + 1;
        while (i2 <= max_ascii_nb - 1)
        {
            i3 = i2 + 1;
            while (i3 <= max_ascii_nb)
            {
                my_print_number(&i1, &i2, &i3);
                i3++;
            }
            i2++;
        }
        i1++;
    }
}