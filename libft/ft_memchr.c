/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:42:37 by iozmen            #+#    #+#             */
/*   Updated: 2023/10/28 13:43:15 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

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
