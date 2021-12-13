/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:46:49 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/10 13:42:21 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int					i;
	char				*substr;
	unsigned int		s_len;
	unsigned int		size_s;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	size_s = ft_strlen(s + start);
	if (size_s < len)
		len = size_s;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (len--)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

