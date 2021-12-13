/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:14:42 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/10 11:20:13 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)malloc(sizeof(char) * i + 1);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
		while (s1[j])
			s[i++] = s1[j++];
	j = 0;
	if (s2)
		while (s2[j])
			s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
