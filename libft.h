/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:55:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/23 21:21:11 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
** Tabela de Funções da Libft
**
** Nome da Função      | Descrição
** --------------------|-------------------------------------------------------
** Funções da LibC (Parte 1 - `ft_`)
** ft_isalpha          | Verifica se um caractere é uma letra alfabética.
** ft_isdigit          | Verifica se um caractere é um dígito (0-9).
** ft_isalnum          | Verifica se um caractere é alfanumérico
** | (letra ou dígito).
** ft_isascii          | Verifica se um caractere está dentro do conjunto ASCII.
** ft_isprint          | Verifica se um caractere é imprimível.
** ft_strlen           | Calcula o comprimento de uma string.
** ft_memset           | Preenche um bloco de memória com um valor específico.
** ft_bzero            | Zera um bloco de memória.
** ft_memcpy           | Copia um bloco de memória de uma origem para um destino.
** ft_memmove          | Move um bloco de memória (seguro para sobreposição).
** ft_strlcpy          | Copia uma string com um limite de tamanho seguro.
** ft_strlcat          | Concatena uma string com um limite de tamanho seguro.
** ft_toupper          | Converte um caractere para maiúscula.
** ft_tolower          | Converte um caractere para minúscula.
** ft_strchr           | Localiza a primeira ocorrência de um caractere
** | em uma string.
** ft_strrchr          | Localiza a última ocorrência de um caractere
** | em uma string.
** ft_strncmp          | Compara duas strings até um número especificado
** | de caracteres.
** ft_memchr           | Localiza a primeira ocorrência de um byte em um bloco
** | de memória.
** ft_memcmp           | Compara dois blocos de memória.
** ft_strnstr          | Localiza a primeira ocorrência de uma substring em uma
** | string com limite.
** ft_atoi             | Converte uma string para um inteiro.
** ft_calloc           | Aloca memória e a inicializa com zeros.
** ft_strdup           | Duplica uma string.
**
** Funções Adicionais (Parte 2 - `ft_`)
** ft_substr           | Extrai uma substring de uma string.
** ft_strjoin          | Concatena duas strings em uma nova string.
** ft_strtrim          | Remove caracteres de um conjunto especificado do início
** | e fim de uma string.
** ft_split            | Divide uma string em um array de strings usando um
** | delimitador.
** ft_itoa             | Converte um inteiro em uma string.
** ft_strmapi          | Aplica uma função a cada caractere de uma string,
** | criando uma nova string.
** ft_striteri         | Aplica uma função a cada caractere de uma string,
** | permitindo modificação in-place.
** ft_putchar_fd       | Escreve um caractere em um descritor de arquivo.
** ft_putstr_fd        | Escreve uma string em um descritor de arquivo.
** ft_putendl_fd       | Escreve uma string seguida de uma quebra de linha em
** | um descritor de arquivo.
** ft_putnbr_fd        | Escreve um inteiro em um descritor de arquivo.
**
** Funções Bônus (Parte Bônus - `ft_lst`)
** ft_lstnew           | Cria um novo nó para uma lista encadeada.
** ft_lstadd_front     | Adiciona um nó no início de uma lista encadeada.
** ft_lstsize          | Conta o número de nós em uma lista encadeada.
** ft_lstlast          | Retorna o último nó de uma lista encadeada.
** ft_lstadd_back      | Adiciona um nó no final de uma lista encadeada.
** ft_lstdelone        | Libera um único nó de uma lista, usando uma função 'del'
** | para seu conteúdo.
** ft_lstclear         | Deleta e libera uma lista inteira, definindo o
** |ponteiro dalista para NULL.
** ft_lstiter          | Aplica uma função a cada nó de uma lista.
** ft_lstmap           | Itera uma lista, aplica uma função e cria uma nova lista
** | com os resultados.
*/

int					ft_iswhitespace(char c);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *str, const char *find, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strdup(const char *s1);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				**ft_split(char const *str, char c);

int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memset(void *dst, int src, size_t len);
void				ft_bzero(void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);

size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif