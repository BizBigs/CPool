#include "my_compute_square_root.h"

int my_compute_square_root(int nb)
{
    int result = 1;
    int tmp_result;

    while (result <= (nb / 2))
    {
        tmp_result = result * result;
        if (tmp_result == nb)
        {
            return result;
        }
        result++;
    }
    return 0;
}