/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:01:09 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/28 15:49:04 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > (s_len - start))
		sub_str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (sub_str == 0)
		return (NULL);
	i = 0;
	while (i < len && s[i])
		sub_str[i++] = s[start++];
	sub_str[i] = '\0';
	return (sub_str);
}
