#include "my_compute_power_it.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0)
    {
        return 0;
    }
    else
    {
        while (p > 0)
        {
            result *= nb;
            p--;
        }
    }
    return result;
}