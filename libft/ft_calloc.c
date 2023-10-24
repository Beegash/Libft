#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t memsize;
    void *memorySpace;

    memsize = count * size;
    memorySpace = malloc(memsize);
    if (!memorySpace)
        return (NULL);
    ft_memset(memorySpace, 0, memsize);
    return (memorySpace);
}