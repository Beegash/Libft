/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:34:59 by iozmen            #+#    #+#             */
/*   Updated: 2023/10/28 13:35:40 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	memsize;
	void	*memoryspace;

	memsize = count * size;
	memoryspace = malloc(memsize);
	if (!memoryspace)
		return (NULL);
	ft_memset(memoryspace, 0, memsize);
	return (memoryspace);
}
