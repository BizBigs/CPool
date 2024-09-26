#include "my_put_nbr.h"
#include <stdio.h>

int get_mult_parser(int *nb)
{
    int power = 1;

    while (*nb != 0)
    {
        *nb /= 10;
        power *= 10;
    }
    return power / 10;
}

void my_put_nbr(int nb)
{

    int tmp_nb = nb;
    int power = get_mult_parser(&tmp_nb);
    int tmp_digit;

    if (nb == 0)
    {
        my_putchar(48);
    }
    else
    {
        if (nb < 0)
        {
            my_putchar('-');
            nb *= -1;
        }
        while (power > 0)
        {
            tmp_digit = nb / (power);
            nb -= tmp_digit * power;
            power /= 10;
            my_putchar(tmp_digit + 48);
        }
    }

    my_putchar('\n');
}