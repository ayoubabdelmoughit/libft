/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:29:42 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/12/10 10:46:07 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*rslt;

	len = ft_nb_len(n);
	nb = n;
	rslt = malloc(sizeof(char) * len + 1);
	if (!rslt)
		return (NULL);
	if (nb < 0)
	{
		rslt[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		rslt[0] = '0';
	rslt[len--] = '\0';
	while (nb)
	{
		rslt[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (rslt);
}
