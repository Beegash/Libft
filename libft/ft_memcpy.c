#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t len)
{
    size_t i;
    char *str1;
    const char*str2;

    i = 0;
    str1 = (char *)dest;
    str2 = (char *)src;
    if (!dest && !src)
        return (NULL);
    while (i < len)
    {
        str1[i] = str2[i];
        i++;
    }
    return (dest);
}