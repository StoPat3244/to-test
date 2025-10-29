#include "libft.h"

static int	to_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
} 
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;
	char	*new_str;

	start = 0;
	end = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_check(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (to_check(set, s1[end]))
		end--;
	new_str = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (new_str == 0)
		return (NULL);
	i = 0;
	while (start < end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
