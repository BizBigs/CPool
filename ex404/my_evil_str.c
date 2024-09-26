#include "my_evil_str.h"
#include <stdio.h>

char *my_evil_str(char *str)
{
    char char_temp;
    int first_char;
    int last_char;

    last_char = my_strlen(str) - 1;
    first_char = 0;
    while (first_char < last_char)
    {
        char_temp = str[first_char];
        str[first_char] = str[last_char];
        str[last_char] = char_temp;
        first_char = first_char + 1;
        last_char = last_char - 1;
    }
    return (str);
}
