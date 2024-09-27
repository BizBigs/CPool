#include "my_compute_factorial_it.h"

int my_compute_factorial_it(int nb)
{
    int total = 1;
    if (nb < 0 || nb > 12)
    {
        return 0;
    }
    while (nb > 1)
    {
        total *= nb;
        nb--;
    }
    return total;
}