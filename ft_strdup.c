/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:10:52 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 19:11:04 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len_s1;
	int		i;

	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	dst = (char *)malloc(sizeof(char) * len_s1 + 1);
	if (!dst)
		return (0);
	i = 0;
	while (i < len_s1)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*original = "Teste de duplicação";
// 	char		*duplicada;

// 	duplicada = ft_strdup(original);
// 	if (!duplicada)
// 	{
// 		printf("Falha na alocação de memória\n");
// 		return (1);
// 	}

// 	printf("Original: %s\n", original);
// 	printf("Duplicada: %s\n", duplicada);

// 	free(duplicada);
// 	return (0);
// }