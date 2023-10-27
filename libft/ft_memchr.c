#include "libft.h"

void *ft_memchr(const void *str, int ch, size_t len)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)str;
    i = 0;

    if (len <= 0)
        return (NULL);
    while (len > i)
    {
        if (ptr[i] == (unsigned char)ch)
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}