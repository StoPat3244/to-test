/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:18:21 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/28 17:18:26 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char		**str_split;
	size_t		i;
	size_t		j;
	size_t		y;

	str_split = (char **)malloc(sizeof(char *) * 2);
	if (str_split == 0)
		return (NULL);
	i = 0;
	j = 0;
	y = 0;
	str_split[0] = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	str_split[1] = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (y < ft_strlen(s))
	{
		if (s[y] == c)
		{
			str_split[j++][i] = '\0';
			i = 0;
		}
		str_split[j][i++] = s[y++];
	}
	str_split[j][i] = '\0';
	return (str_split);
}
