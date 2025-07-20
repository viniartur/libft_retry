/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:15:32 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:51:07 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;

	a = 0;
	while (n > 0)
	{
		if (s1[a] != s2[a])
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		else if (s1[a] == '\0')
			return (0);
		a++;
		n--;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h> 
// int main(void)
// {
//     char *s1 = "teste";
//     char *s2 = "testando";
//     char *s3 = "teste";
//     printf("%d\n", ft_strncmp(s1, s2, 5));
//     printf("%d\n", ft_strncmp(s1, s3, 5));
//     printf("%d\n", ft_strncmp(s1, s2, 3));
//     printf("%d\n", ft_strncmp("abc", "abd", 3));
//     printf("%d\n", ft_strncmp("abc", "abc", 0));
//     return (0);
// }