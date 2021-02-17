/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:03:56 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/16 19:04:35 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     n_length(int n)
{
    int length;

    length = 0;
    // if (n < 0)
    //     length++;
    while (n /= 10) 
        length++;
    return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
    int		negative;
	size_t	index;
    
	negative = 0;
	index = n_length(n) + 1;

    if (n == 0)
        return (ft_strdup("0"));
    if (n + 1 == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		printf("%d\n", n);
		negative = negative + (-1);
		n = -n;
	}
	if (!(str = (char *)malloc(negative + n_length(n) + 1)))
		return (NULL);
	while (n >= 10)
	{
        str[index] = (n % 10) + '0';
		n = n / 10;
		printf("char of str[%zu] : %c\n" , index, str[index]);
		index--;
	}
	printf("N : %d\n", n);
	printf("index : %zu\n", index);
	if (n < 10)
		str[index] = n;
	if (negative == (-1))
		str[index] = '-';
	printf("%s\n", str);
    return (str);
}

int main()
{
	ft_itoa(-1230);
	return 0;
}
