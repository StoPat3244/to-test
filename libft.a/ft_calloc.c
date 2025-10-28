/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:50:02 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/27 15:08:23 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	*value;
	size_t			i;

	value = malloc(nmemb *(sizeof(size)));
	i = 0;
	while (i < nmemb)
	{
		value[i] = 0;
		i++;
	}
	return (value);
}
