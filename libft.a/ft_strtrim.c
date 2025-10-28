/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:09:33 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/25 15:08:41 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str_trim;

	str_trim = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (str_trim == 0)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (ft_strncmp(s1, set, ft_strlen(set)) == 0)
		start = ft_strlen(set);
	if (ft_strncmp(s1 + (end - ft_strlen(set)), set, ft_strlen(set)) == 0)
		end -= ft_strlen(set);
	i = 0;
	while (start < end)
	{
		str_trim[i++] = s1[start++];
	}
	return (str_trim);
}
