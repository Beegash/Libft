#include "libft.h"

void ft_bzero(void *str, size_t len)
{
    char *ptr;

    ptr = (char *)str;
    while (len > 0)
    {
        ptr[len - 1] = 0;
        len--;
    }
    return (str);
}