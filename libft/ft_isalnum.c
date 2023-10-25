#include "libft.h"

int ft_isalnum(int ch)
{
    if ((ch <= 57 && ch >= 48) || (ch <= 90 && ch >= 65) || (ch <= 122 && ch >= 97))
        return (1);
    return (0);
}