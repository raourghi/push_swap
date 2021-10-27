/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:57:48 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 17:57:49 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (dst == src)
		return (NULL);
	i = -1;
	if (src > dst)
	{
		while (len > ++i)
			dstt[i] = srcc[i];
	}
	else
	{
		while (len)
		{
			dstt[len - 1] = srcc[len - 1];
			len--;
		}
	}
	return (dst);
}
