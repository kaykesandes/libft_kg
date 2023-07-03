# libf
## Projeto libft
<h2>Funções criadas: </h2>

- `memset`: Preenche um bloco de memória com um valor específico.
- `bzero`: Zera um bloco de memória, definindo todos os bytes como zero.
- `memcpy`: Copia um bloco de memória da área de origem para a área de destino.
- `memccpy`: Copia um bloco de memória da área de origem para a área de destino até encontrar um determinado caractere.
- `memmove`: Copia um bloco de memória, tratando sobreposições de áreas de origem e destino corretamente.
- `memchr`: Procura um caractere específico em um bloco de memória.
- `memcmp`: Compara dois blocos de memória.
- `strlen`: Calcula o comprimento de uma string.
- `strdup`: Cria uma cópia dinamicamente alocada de uma string.
- `strcpy`: Copia uma string da área de origem para a área de destino.
- `strncpy`: Copia uma string da área de origem para a área de destino com um tamanho máximo especificado.
- `strcat`: Concatena (une) duas strings.
- `strncat`: Concatena (une) duas strings com um tamanho máximo especificado.
- `strlcat`: Concatena (une) duas strings com um tamanho máximo especificado, evitando estouro de buffer.
- `strchr`: Procura a primeira ocorrência de um caractere em uma string.
- `strrchr`: Procura a última ocorrência de um caractere em uma string.
- `strstr`: Procura a primeira ocorrência de uma substring em uma string.
- `strnstr`: Procura a primeira ocorrência de uma substring em uma string com um tamanho máximo especificado.
- `strcmp`: Compara duas strings.
- `strncmp`: Compara dois blocos de memória de strings com um tamanho máximo especificado.
- `atoi`: Converte uma string para um valor inteiro.
- `isalpha`: Verifica se um caractere é uma letra alfabética.
- `isdigit`: Verifica se um caractere é um dígito numérico.
- `isalnum`: Verifica se um caractere é uma letra alfabética ou um dígito numérico.
- `isascii`: Verifica se um caractere é um valor ASCII.
- `isprint`: Verifica se um caractere é imprimível (visível).
- `toupper`: Converte um caractere para maiúsculo.
- `tolower`: Converte um caractere para minúsculo.

<hr>
<br><br>

# Explicação do makefile
```
NAME = libft.a

SRC = ft_bzero.c    ft_memchr.c   ft_memcpy.c \
	  ft_memset.c   ft_strchr.c   ft_strdup.c \
	  ft_strlen.c   ft_strncpy.c  ft_memccpy.c \
	  ft_memcmp.c   ft_memmove.c  ft_strcat.c \
	  ft_strcpy.c   ft_strlcat.c  ft_strncat.c \
	  ft_strrchr.c  ft_strrchr.c  ft_strstr.c\
	  ft_strncmp.c  ft_strnstr.c  ft_atoi.c\
	  ft_strcmp.c   ft_isalpha.c  ft_isdigit.c\
	  ft_isalnum.c  ft_isascii.c  ft_isprint.c\
	  ft_toupper.c  ft_tolower.c

```
<p>
Nessa parte, estão definidas as variáveis NAME e SRC. NAME define o nome do arquivo de biblioteca a ser gerado (libft.a), e SRC contém a lista de arquivos-fonte (.c) necessários para construir a biblioteca.
</p>
<hr>

```
OBJS = ${SRC:.c=.o}
CC = cc 
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h 
MAIN = main 
TEST_FOLDER = tests
```
<p> 
Aqui, OBJS é uma variável que armazena a lista de arquivos-objeto (.o) derivados dos arquivos-fonte. CC define o compilador a ser usado (no caso, cc). CFLAGS são as opções do compilador, que incluem -Wall (ativa avisos detalhados), -Wextra (ativa avisos extras) e -Werror (trata os avisos como erros). HEADER especifica o nome do arquivo de cabeçalho (.h) para a biblioteca, e MAIN é um nome arbitrário dado ao executável principal. TEST_FOLDER é o diretório onde os arquivos de teste estão localizados.
</p>
<hr>

```
all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
		ar -rcs ${NAME} ${OBJS} ${HEADER}
```
<p>
Na regra all, o alvo é o arquivo libft.a. A regra indica que o arquivo alvo depende dos arquivos-objeto e do arquivo de cabeçalho. A ação é executar o comando ar para criar o arquivo libft.a a partir dos arquivos-objeto e do arquivo de cabeçalho.
</p>
<hr>

```
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
```
<p>
Essa regra é uma regra implícita que indica como criar arquivos-objeto (.o) a partir de arquivos-fonte (.c). A ação é executar o comando cc com as opções definidas em CFLAGS para compilar cada arquivo-fonte individualmente.
</p>
<hr>

```
clean:
	${RM} ${OBJS} libft.so *.out

fclean: clean
	${RM} ${NAME}

re: fclean all
```
<p> As regras clean, fclean e re são regras de limpeza e reconstrução. A regra clean remove os arquivos-objeto, o arquivo compartilhado libft.so (se existir) e todos os arquivos com ext
</p>
<hr>
<br>

# Explicação do `libft.h`

- As diretivas `#ifndef` e `#define` são usadas para evitar a inclusão duplicada do arquivo de cabeçalho, garantindo que seja incluído apenas uma vez durante a compilação.
- Em seguida, são feitas inclusões de outros arquivos de cabeçalho padrão, como `stdlib.h`, `unistd.h`, `string.h` e `stddef.h`, que fornecem declarações e definições para funções e tipos usados nas implementações das funções da biblioteca.
- A seguir, são definidas algumas macros úteis, como `TRUE` e `FALSE`, para representar valores booleanos, `INT_MAX` e `INT_MIN` para representar os valores máximo e mínimo de um inteiro, `ULONG_MAX` para representar o valor máximo de um unsigned long, e `NULL_BYTE` para representar o tamanho de um byte nulo (`'\0'`).
- Em seguida, são declarados os protótipos das funções da biblioteca, como `ft_strlen`, `ft_strncat`, `ft_bzero` e assim por diante. Cada protótipo especifica o tipo de retorno da função e os parâmetros esperados.
- Por fim, a diretiva #endif é usada para fechar a estrutura `#ifndef`/`#define`, encerrando a definição do arquivo de cabeçalho.