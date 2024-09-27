#include "my_find_prime_sup.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **argv)
{
    if (ac > 1)
    {
        int num = atoi(argv[1]);
        // int p = atoi(argv[2]);
        printf("%d\n", my_find_prime_sup(num));
    }
    else
    {
        int size = 12;
        int array[] = {3, 6, 2, 89, 45, -67, 76, 32, 2367, -47474, 0};
        int i = 0;
    }
    return 0;
}