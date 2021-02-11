/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:24:06 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/10 12:36:26 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int i;
	unsigned char *p;

	p = (unsigned char*)str;
	i = 0;
	while (i < len)
	{
		*(p + i) = c;
		i++;
	}
	if (*(p + i) != 0)
		p++;
	return (str);
}
