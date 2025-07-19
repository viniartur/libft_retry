/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:25:08 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/18 19:47:46 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;
	int		i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	if (!src && !dst)
		return (0);
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		i = n;
		while (i)
		{
			ptr_d[i - 1] = ptr_s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (ptr_d);
}