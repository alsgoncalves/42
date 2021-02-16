/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:47:35 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/16 11:48:38 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	//unsigned int catch;
	char *trimmed_str;

	trimmed_str = (char *)malloc((ft_strlen(s1) - (ft_strlen(set) * 2)) + 1);
	if (trimmed_str == NULL)
		return (NULL); 
	i = 0;
	j = 0;
	k = 0;
	while(s1[i] != '\0')
	{
    	if (s1[i] == set[j])
		{
    		i++;
			j++;
		}
		trimmed_str[k] = s1[i];
		i++;
		k++;
	}
	// catch = trimmed_str[i];
	// i = ft_strlen(trimmed_str);
	// j = ft_strlen(set);

	// while(i > 0)
	// {
    // 	if (trimmed_str[i] == set[j])
	// 	{
    // 		i--;
	// 		j--;
	// 	}
	// 	k = trimmed_str[i];
	// 	i--;
	// }
	return (trimmed_str);
}

int main()
{
	char *s1 = "	hey there 	";
	char *set = "	";
	printf("%s\n", ft_strtrim(s1, set));
	return 0;
}