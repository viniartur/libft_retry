Visão Geral
Libft é o meu primeiro grande projeto na 42 São Paulo, focado em recriar um conjunto de funções da biblioteca padrão C. O objetivo é aprimorar a compreensão dos conceitos fundamentais da linguagem, como manipulação de memória, strings e estruturas de dados, tudo isso sem usar as funções originais. Esta biblioteca serve como um ponto de partida para todos os meus projetos futuros na 42.

Funções Incluídas
A Libft está dividida em três partes principais:

Funções Libc: Recriações de funções padrão, como strlen, atoi e memset.

Funções Adicionais: Funções úteis que não estão na biblioteca padrão C.

Funções de Bônus: Funções para manipulação de listas encadeadas.

Aqui está uma prévia das funções que você pode encontrar na biblioteca:

ft_isalpha

ft_isdigit

ft_isalnum

ft_isascii

ft_isprint

ft_strlen

ft_memset

ft_bzero

ft_memcpy

ft_memmove

ft_strlcpy

ft_strlcat

ft_toupper

ft_tolower

ft_strchr

ft_strrchr

ft_strncmp

ft_memchr

ft_memcmp

ft_strnstr

ft_atoi

🛠️ Como Usar
Para usar as funções da Libft no seu projeto, siga os passos abaixo:

Clone o repositório:

Bash

git clone https://github.com/viniartur/libft_retry.git
Navegue até o diretório da libft_retry e compile a biblioteca com o Makefile:

Bash

cd libft_retry
make
Inclua o cabeçalho libft.h no seu código:

C

#include "libft.h"
Compile seu arquivo com a biblioteca estática (libft.a):

Bash

gcc your_file.c libft.a -o your_program
👤 Autor
[Seu Nome] - Link para o seu perfil no GitHub
