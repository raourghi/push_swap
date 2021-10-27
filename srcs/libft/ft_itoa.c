/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:56:43 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 17:56:45 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_store(char *str, int int_size, int n)
{
	int	i;

	if (n > 0)
		i = 1;
	else
		i = 0;
	str[int_size] = '\0';
	while (i <= --int_size)
	{
		str[int_size] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	int				int_size;

	i = 0;
	int_size = ft_intsize(n);
	str = (char *)malloc(sizeof(char) * int_size + 1);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n <= 0)
		int_size += 1;
	if (!str)
		return (NULL);
	if (n <= 0)
	{
		i = 1;
		if (n == 0)
			str[0] = '0';
		else
			str[0] = '-';
		n = -n;
	}
	ft_store(str, int_size, n);
	return (str);
}
