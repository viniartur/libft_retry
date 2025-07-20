/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:22:55 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:55:07 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdlib.h>
// #include <stdio.h>
// size_t  ft_strlen(const char *s)
// {
//     size_t  n;
//     n = 0;
//     while (s[n] != '\0')
//         n++;
//     return (n);
// }
// char    my_func(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return ((char)(c - 32));
//     return (c);
// }
// int main(void)
// {
//     char    *str;
//     char    *result;
//     str = "hello world";
//     result = ft_strmapi(str, &my_func);
//     printf("Original: %s\n", str);
//     printf("Modificado: %s\n", result);
//     free(result);
//     str = "42SaoPaulo";
//     result = ft_strmapi(str, &my_func);
//     printf("Original: %s\n", str);
//     printf("Modificado: %s\n", result);
//     free(result);
//     return (0);
// }