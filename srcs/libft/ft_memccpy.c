/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:56:57 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 17:56:58 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	srcc = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dstt[i] = srcc[i];
		if (srcc[i] == (unsigned char)c)
			return (dstt + ++i);
		i++;
	}
	return (0);
}
