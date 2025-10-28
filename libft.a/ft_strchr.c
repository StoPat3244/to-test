/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:22:50 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/27 15:11:14 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	chr;

	i = 0;
	ptr = (char *)s;
	chr = (char)c;
	if (chr == '\0')
		return (ptr + ft_strlen(s));
	while (ptr[i])
	{
		if (ptr[i] == chr)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
