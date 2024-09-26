#include "my_put_nbr.h"
#include <stdlib.h>

int main(int ac, char **argv)
{
    if (ac > 1)
    {
        int num = atoi(argv[1]);
        my_put_nbr(num);
    }
    else
    {
        return 1;
    }
    return 0;
}