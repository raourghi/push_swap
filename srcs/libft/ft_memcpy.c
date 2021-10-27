/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:57:36 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 17:57:38 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*ssrc;

	dest = (char *)dst;
	ssrc = (char *)src;
	if (src == dst)
		return (dst);
	if (!dest && !ssrc)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = ssrc[i];
		i++;
	}
	return (dst);
}
