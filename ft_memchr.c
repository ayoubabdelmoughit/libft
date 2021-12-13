/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:23:07 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/10 10:24:59 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*h1;
	size_t			i;

	h1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (h1[i] == (unsigned char)c)
			return (h1 + i);
		i++;
	}
	return (0);
}
