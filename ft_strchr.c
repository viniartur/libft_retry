/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:46:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 19:09:29 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;
	int		len_s;

	len_s = 0;
	while (s[len_s])
		len_s++;
	ptr = (char *)s;
	i = 0;
	while (i < len_s + 1)
	{
		if (ptr[i] == (char)c)
			return (ptr + i);
		i++;
	}
	return (ptr = 0);
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