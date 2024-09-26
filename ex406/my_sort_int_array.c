#include "my_sort_int_array.h"

void my_sort_int_array(int *array, int size)
{
    int nb_operations = 0;
    int i = 0;
    int tmp;

    while (i < size)
    {
        if (array[i] > array[i + 1] && i + 1 < size)
        {
            tmp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp;
            nb_operations++;
        }
        i++;
    }
    if (nb_operations > 0)
    {
        my_sort_int_array(array, size);
    }
}
