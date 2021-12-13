/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:26:43 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/09 15:36:58 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	rtn;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	if (d_len < dstsize)
		rtn = d_len + s_len;
	else
		rtn = s_len + dstsize;
	i = 0;
	while (src[i] != '\0' && d_len < dstsize - 1)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (rtn);
}
