/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:04:02 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 18:04:04 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*s2;

	if (s == NULL)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	size = ft_strlen(s);
	if (!s2)
		return (NULL);
	i = 0;
	if (start < size)
	{
		while (i < len)
		{
			s2[i] = s[start];
			start++;
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}
