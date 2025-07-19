/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:32:14 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/24 14:42:11 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	needle_s;
	unsigned int	count;

	needle_s = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (needle[needle_s])
		needle_s++;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		count = 0;
		while (haystack[i + j] == needle[j] && j < needle_s && i + j < len)
		{
			j++;
			count++;
		}
		if (count == needle_s)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// https://man.freebsd.org/cgi/man.cgi?query=strnstr