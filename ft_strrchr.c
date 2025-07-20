/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:47:39 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:55:13 by vvieira          ###   ########.fr       */
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
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *str = "hello world, hello 42 Sao Paulo";
//     char c1 = 'o';
//     char c2 = 'h';
//     char c3 = 'z';
//     char c4 = '\0';
//     printf("'%c' em '%s': %s\n", c1, str, ft_strrchr(str, c1));
//     printf("'%c' em '%s': %s\n", c2, str, ft_strrchr(str, c2));
//     printf("'%c' em '%s': %s\n", c3, str, ft_strrchr(str, c3));
//     printf("'%c' em '%s': %s\n", c4, str, ft_strrchr(str, c4));
//     printf("'%c' em '%s': %s\n", 'l', "hello", ft_strrchr("hello", 'l'));
//     return (0);
// }