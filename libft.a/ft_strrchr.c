/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:24:11 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/27 15:12:08 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	chr;

	i = 0;
	ptr = (char *)s;
	chr = (char)c;
	if (chr == '\0')
		return (ptr + ft_strlen(s));
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ptr[i] == chr)
			return (ptr + i);
		i--;
	}
	return (NULL);
}
