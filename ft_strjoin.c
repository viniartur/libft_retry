/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:20:13 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:37:13 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
// size_t	ft_strlen(const char *s)
// {
// 	size_t	n;
// 	n = 0;
// 	while (s[n] != '\0')
// 		n++;
// 	return (n);
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char	*resultado;
// 	resultado = ft_strjoin("Olá, ", "mundo!");
// 	if (!resultado)
// 	{
// 		printf("Falha na alocação de memória\n");
// 		return (1);
// 	}
// 	printf("String concatenada: %s\n", resultado);
// 	free(resultado);
// 	return (0);
// }