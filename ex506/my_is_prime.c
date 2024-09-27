#include "my_is_prime.h"

int my_is_prime(int nb)
{
    int divider = 2;
    int tmp_result;

    if (nb == 0 || nb == 1)
    {
        return 0;
    }
    while (divider < nb)
    {
        tmp_result = nb % divider;
        if (tmp_result == 0)
        {
            return 0;
        }
        divider++;
    }
    return 1;
}