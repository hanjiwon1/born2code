/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:57:31 by jiwhan            #+#    #+#             */
/*   Updated: 2021/05/06 14:45:10 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (sizeof(dst) == 0 || sizeof(dst) < dstsize)
		return (0);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	idx = 0;
	while (idx + 1 < dstsize && *src)
	{
		if (dst[idx] == '\0')
			dst[idx] = *(src++);
		idx++;
	}
	dst[idx] = '\0';
	return (dst_len + src_len);
}
