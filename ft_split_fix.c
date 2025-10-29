#include "libft.h"

static size_t	ft_count_w(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
			{
				j = 1;
				count++;
			}
		else fi (s[i] == c)
			x = 0;
		i++; 
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
	char	**str_split;
	size_t	i;
	size_t	words;

	if (!s)
		{
			str_split = (char **)malloc (sizeof(char) * 1);
			if (!str_split)
				return (NULL);
			*str_split = NULL;
			return (str_split);	
		}
	words = ft_count_w(s, c);
	str_split = (char **)malloc(sizeof(char *) * (p + 1));
	if (str_split == 0)
		return (NULL);
	i = 0;
	words = 0;
	while (i < ft_strlen(s))
	{
		str_split[words] = ft_fill_string(s, i, c);
		i++;
		words++;
	}
	str_split[i] = NULL;
}
