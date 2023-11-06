/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:44:03 by iozmen            #+#    #+#             */
/*   Updated: 2023/10/28 13:57:12 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*str1;
	const char	*str2;

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
