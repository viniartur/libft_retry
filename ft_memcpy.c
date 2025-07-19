/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:08:33 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/25 23:31:10 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*de;
	char	*sr;

	i = 0;
	de = (char *)dest;
	sr = (char *)src;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (de);
}

// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;

// 	if (!dest && !src)
// 		return (0);
// 	i = 0;
// 	while (i < n)
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	return(dest);
// }