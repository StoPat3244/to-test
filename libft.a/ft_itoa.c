/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:44:53 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/25 15:57:05 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_cell(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_decimal(int n)
{
	int	decimal;

	decimal = 1;
	while (n-- > 1)
		decimal *= 10;
	return (decimal);
}

char	*ft_itoa(int n)
{
	int		i;
	int		cell;
	int		decimal;
	char	*str;

	cell = ft_n_cell(n);
	decimal = ft_decimal(cell);
	str = (char *)malloc(sizeof(char) * cell + 2);
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	while (cell-- > 0)
	{
		str[i++] = n / decimal + 48;
		n %= decimal;
		decimal /= 10;
	}
	str[i] = '\0';
	return (str);
}
