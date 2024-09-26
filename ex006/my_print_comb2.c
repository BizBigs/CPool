#include "my_print_comb2.h"

void my_print_number(int *i1, int *i2, int *i3, int *i4)
{
    my_putchar(*i1);
    my_putchar(*i2);
    my_putchar(' ');
    my_putchar(*i3);
    my_putchar(*i4);
    if (!(*i1 == 57 && *i2 == 56 && *i3 == 57 && *i4 == 57))
    {

        my_putchar(',');
        my_putchar(' ');
    }
}

void my_print_comb2()
{
    int min_ascii_nb = 48;
    int max_ascii_nb = 57;

    int i1 = min_ascii_nb;
    int i2, i3, i4;

    while (i1 <= max_ascii_nb)
    {
        i2 = min_ascii_nb;
        while (i2 <= max_ascii_nb)
        {
            i3 = min_ascii_nb;
            while (i3 <= max_ascii_nb)
            {
                i4 = min_ascii_nb;
                while (i4 <= max_ascii_nb)
                {
                    if ((i1 * 10) + i2 < (i3 * 10) + i4)
                    {
                        my_print_number(&i1, &i2, &i3, &i4);
                    }
                    i4++;
                }
                i3++;
            }
            i2++;
        }
        i1++;
    }

    my_putchar('\n');
}