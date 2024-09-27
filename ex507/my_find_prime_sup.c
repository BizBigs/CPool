#include "my_find_prime_sup.h"

int my_find_prime_sup(int nb)
{
    int tmp_result;
    while (nb > 1)
    {
        tmp_result = my_is_prime(nb);
        if (tmp_result == 1)
        {
            return nb;
        }
        nb--;
    }
    return 0;
}