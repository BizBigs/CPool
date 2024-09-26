#include "my_sort_int_array.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **argv)
{
    if (ac > 1)
    {
        int num = atoi(argv[1]);
    }
    else
    {
        int size = 11;
        int array[] = {3, 6, 2, 89, 45, -67, 76, 32, 2367, -47474, 0};
        int i = 0;
        my_sort_int_array(array, size);

        while (i < size)
        {
            printf("%d ", array[i]);
            i++;
        }
        printf("\n");
        return 1;
    }
    return 0;
}