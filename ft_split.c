/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 10:56:37 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/05 11:32:03 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include "libft.h"

bool			char_is_separator(char s, char c)
{
	if (s == c)
		return (true);
	if (s == '\0')
		return (true);
	return (false);
}

long long		ft_word_count(char *str, char c)
{
	long long w_count;
	long long i;

	i = 0;
	w_count = 0;
	while (str[i])
	{
		if (!char_is_separator(str[i], c))
		{
			w_count++;
			while (str[i] && !char_is_separator(str[i], c))
				i++;
		}
		i++;
	}
	return (w_count);
}

char		*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < len)
	{
		ft_bzero((void *)(dest + i), len - i);
		i++;
	}
	return (dest);
}

char			**ft_split(char *str, char c)
{
	int		i;
	char	**arr_of_strs;
	char	*str_copy;

	i = 0;
	arr_of_strs = malloc((ft_word_count(str, c) + 1) * sizeof(char *));
	if (arr_of_strs == NULL)
		return (0);
	while (*str)
	{
		str_copy = str;
		while (!char_is_separator(*str, c))
			str++;
		if (ft_strlen(str_copy) > ft_strlen(str))
		{	
			arr_of_strs[i] = malloc((str - str_copy + 1) * sizeof(char));
			if (!arr_of_strs[i])
				return (NULL);
			ft_strncpy(arr_of_strs[i], str_copy , str - str_copy);
			i++;
		}
		str++;
	}
	arr_of_strs[i] = 0;
	return (arr_of_strs);
}

int main() {
   
//    printf("TESTING OUT SPLIT\n");

// 	char string1[50] = "Hello beautiful amazing world";
// 	char *charset;
// 	charset = " ";

//    ft_split(string1, charset);

// 	return 0;
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, 'i');
	while (*result)
	{
		// if (strcmp(*result, *expected))
		// {
		// 	exit(TEST_FAILED);
		// }
		printf("%s\n", *result);
		result++;
		// expected++;
	}
	
	
	return 0;
}
