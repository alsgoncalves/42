/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:02:50 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/11 12:56:47 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	temp = dst;
	
	if (s != 0 || d != 0)
	{
		while (i < len)
		{	
			*(temp + i) = *(s + i);
			*(d + i) = *(temp + i);
			i++;
		}
	}
	return (dst);
}
