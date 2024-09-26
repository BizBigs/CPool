#include "my_getnbr.h"

int parse_char(char c, char prev, long *nb, int *isneg)
{
    int digit;

    if (c >= 48 && c <= 57)
    {
        digit = c - 48;
        if (prev == '-')
        {
            *isneg *= -1;
        }
        if (*nb == 0)
        {
            *nb += digit;
        }
        else
        {
            *nb = (*nb * 10) + digit;
        }
        return 1;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long nb = 0;
    int isneg = 1;
    int res_char_parse;

    while (str[i] != '\0')
    {
        res_char_parse = parse_char(str[i], str[i - 1], &nb, &isneg);

        if ((str[i + 1] < 48 || str[i + 1] > 57) && res_char_parse == 1)
        {
            return nb * isneg;
        }
        if (nb < -2147483648 || nb > 2147483648)
        {
            return 0;
        }
        i++;
    }
    return nb * isneg;
}
