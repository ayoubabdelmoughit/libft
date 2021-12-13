/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:21:01 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/10 11:39:25 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ps1;
	char	*ps2;

	i = 0;
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	if (ps2[i] == '\0')
		return (&ps1[0]);
	while (ps1[i] != '\0' && i < n)
	{
		j = 0;
		while (ps2[j] == ps1[i + j] && (i + j) < n)
		{
			if (ps2[j + 1] == '\0')
			{
				return (&ps1[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
