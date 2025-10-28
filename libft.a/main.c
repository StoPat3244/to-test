/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:19:40 by mcarrara          #+#    #+#             */
/*   Updated: 2025/10/28 16:45:54 by mcarrara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//questi due li ho aggiunti solo dopo per le funzioni
#include <stdlib.h>
#include <stddef.h>

int main()
{
	char a[20] = "Hello world";
	char *b = "Table";

	// char
	printf("isalpha: f is (1) %d.\n", ft_isalpha('f'));
	printf("isalpha: ; is (0) %d.\n", ft_isalpha(';'));
	printf("isdigit: 2 is (1) %d.\n", ft_isdigit('2'));
	printf("isdigit: a is (0) %d.\n", ft_isdigit('a'));
	printf("isalnum: g is (1) %d.\n", ft_isalnum('g'));
	printf("isalnum: ; is (0) %d.\n", ft_isalnum(';'));
	printf("isascii: ; is (1) %d.\n", ft_isascii(';'));
	printf("isascii: € is (0) %d.\n", ft_isascii(173));
	printf("isprint: g is (1) %d.\n", ft_isprint('g'));
	printf("isprint: newline (0) %d.\n", ft_isprint('\n'));
	printf("toupper: g (G) %c.\n", ft_toupper('g'));
	printf("tolower: G (g) %c.\n", ft_tolower('G'));
	printf("strlen: ciao (%ld), vuoto (%ld)\n", ft_strlen("ciao"), ft_strlen(""));

	//str
	printf("Hello = (5), %ld\n", ft_strlen("Hello"));
	printf("Hello and welcome = (welcome), %s\n", ft_strchr("Hello and welcome", 'w'));
	printf("Hello and welcome = (lcome), %s\n", ft_strrchr("Hello and welcome", 'l'));
	printf("Hello Hem= (-1), %d\n", ft_strncmp("Hello", "Hem", 3));
	printf("Hello = (3), %ld\n", ft_strlcpy(a, b, 3));
	printf("Hello world + Table* 3 = (HelloTab), %ld\n", ft_strlcat(a, b, 3));
	printf("Hello new world, new = (new world), %s\n", ft_strnstr("Hello new world", "new", 12));
	printf("Hello new world, new = (null), %s\n", ft_strnstr("Hello new world", "new", 2));
	printf("   -234ads = (-234), %d\n", ft_atoi("   -234ads"));
	printf("Hello = (Hello), %p\n", ft_strdup("Hello"));

	//mem
	printf("ft_memset_____\n");
	char meme[20];
	ft_memset(meme, 'A', 10);
	printf("Filled string: %s\n", meme);
	
	printf("ft_memcpy_____\n");
	char mc1[20];
	char mc2[] = "Hello, World!";
	ft_memcpy(mc1, mc2, 14);
	printf("Copied string: %s\n", mc1);
	
	char over[] = "abcdefghilm";
	ft_memcpy(over + 1, over, 9);
	printf("(aaaaaaaaalm) = %s\n", over);

	printf("ft_memmove_____\n");
	char source[20] = "Hello, World!";
	ft_memmove(source + 3, source + 7, 2);
	printf("Copied string: (Helwo, World!)%s\n", source);

	printf("ft_memmove overlap_____\n");
	char over1[] = "abcdefghilm";
	ft_memmove(over1 + 1, over1, 9);
	printf("(abcdefghilm) = %s\n", over1);


	char sourcedue[20] = "Hello, World";
	const char *ptr = ft_memchr(sourcedue, 'W', 9);
	printf("World = %s\n", ptr);
	
	const char str1[] = "Hello";
    	const char str2[] = "Helxo";
	int result = ft_memcmp(str1, str2, 5);
	printf("(-12) = %d\n", result);

	char f[20];
	ft_bzero(f, 5);
	printf("Str1 dopo bzero = %s <vuoto>\n", f);

	//second part
	char sub[] = "Today is a sunny day!";
	char *sub2 = ft_substr(sub, 11, 5);
	printf("sunny = %s \n", sub2);

	char *join1 = "Hello";
	char *join2 = " world";
	char *join3 = ft_strjoin(join1, join2);
	printf("Hello world = %s \n", join3);

	char *trim1 = "Hello world ";
	char *trim2 = " ";
	char *trim3 = ft_strtrim(trim1, trim2);
	printf("Hello world! = %s!\n", trim3);
	
	char *split1 = "HelloWorld";
	char split2 = 'W';
	char **split = ft_split(split1, split2);
	printf("HelloWorld W = stringa 1, %s\n", split[0]);
	printf("HelloWorld W = stringa 2, %s\n", split[1]);
	
	int n_itoa = -342;
	printf("-342 = %s\n", ft_itoa(n_itoa));
	
	/*char striter[] = "hello world";
	char *ft_upper(unsigned int i, char * ptr)
	{
		ptr[i] -= 32;
		return (ptr)
	}
	char striterup[] = ft_striteri(striter, ft_upper);
	printf("hello world = toupper = %s\n", striterup);


	char *api = "hello";
	char *api2 = ft_strmapi(api, ft_chartoupper);
	printf("hello to up = %s\n", api2);
	*/
return (0);
}
