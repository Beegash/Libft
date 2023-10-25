#include "libft.h"

int ft_isalpha(int ch)
{
    if ((ch <= 90 && ch >= 65) || (ch <= 122 && ch >= 97))
        return (1);
    return (0);
}