/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:52:13 by adaifi            #+#    #+#             */
/*   Updated: 2022/08/25 19:33:03 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	while (i < j && i < (dstsize - 1) && src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i + 1] = '\0';
	return (j);
}
