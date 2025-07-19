/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:47:39 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/30 16:47:56 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*lst_occ;
	int		s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	ptr = (char *)s;
	lst_occ = 0;
	i = 0;
	while (i < s_len + 1)
	{
		if (ptr[i] == (char)c)
			lst_occ = &ptr[i];
		i++;
	}
	return (lst_occ);
}