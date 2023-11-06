/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozmen <iozmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:52:19 by iozmen            #+#    #+#             */
/*   Updated: 2023/10/29 18:37:17 by iozmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	end;
	size_t	dstlen;
	char	*str;

	dstlen = ft_strlen(s);
	end = 0;
	if (!s)
		return (NULL);
	if (start > dstlen)
		return (ft_strdup(""));
	if (start < dstlen)
		end = dstlen - start;
	if (end > len)
		end = len;
	str = (char *)malloc((sizeof(char) * (end + 1)));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, end + 1);
	return (str);
}
