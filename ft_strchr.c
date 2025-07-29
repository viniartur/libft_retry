/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:46:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/28 20:54:54 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*str = "Hello, world!";
// 	char		*result;
// 	result = ft_strchr(str, 'o');
// 	if (result)
// 		printf("Primeira ocorrência encontrada: %s\n", result);
// 	else
// 		printf("Caractere não encontrado.\n");
// 	return (0);
// }