/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:44:37 by iozmen            #+#    #+#             */
/*   Updated: 2023/10/28 13:45:03 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len > 0)
	{
		ptr[len - 1] = (unsigned char)ch;
		len--;
	}
	return (str);
}
