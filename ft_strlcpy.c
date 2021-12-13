/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:19:42 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/09 15:36:38 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*s;

	i = 0;
	len = 0;
	s = (char *)src;
	len = ft_strlen(s);
	if (size == 0)
		return (len);
	while (s[i] && i < size - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
