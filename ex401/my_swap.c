#include "my_swap.h"

void my_swap(int *a, int *b)
{
    int tmp_a = *a;
    int tmp_b = *b;

    *a = tmp_b;
    *b = tmp_a;
}
