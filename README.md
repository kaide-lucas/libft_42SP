<h1 align="center">
	🧪 Libft - @42SP
</h1>

<p align="center">
	<b><i>O primeiro projeto do Cursus da 42 — recriando a biblioteca padrão da linguagem C.</i></b>
</p>

<p align="center">
	<img src="https://img.shields.io/badge/Score-125%2F100-success?style=for-the-badge&logo=42" alt="42 Grade" />
	<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C" />
	<img src="https://img.shields.io/badge/Campus-42%20S%C3%A3o%20Paulo-black?style=for-the-badge" alt="42 SP" />
</p>

---

## 📌 Sobre o Projeto

A **Libft** é o primeiro projeto da formação principal da **42 São Paulo**. O objetivo é recriar diversas funções essenciais da biblioteca padrão da linguagem C (`libc`), além de implementar funções adicionais utilitárias para manipulação de strings, memória e listas encadeadas.

A biblioteca gerada (`libft.a`) serve de base para os projetos futuros do Cursus (como *ft_printf*, *get_next_line*, *so_long*, *push_swap*, entre outros).

---

## 🛠️ Funções Implementadas

### Parte 1 - Funções da `libc`
Funções utilitárias e de manipulação de memória e strings idênticas às da biblioteca padrão da linguagem C:

| Categoria | Funções |
| :--- | :--- |
| **Verificação de Caracteres** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| **Conversão de Caracteres** | `ft_toupper`, `ft_tolower` |
| **Manipulação de Strings** | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Manipulação de Memória** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| **Cópia e Concatenação** | `ft_strlcpy`, `ft_strlcat`, `ft_atoi` |

---

### Parte 2 - Funções Adicionais
Funções de utilidade geral não presentes na `libc` padrão ou modificadas para facilitar o desenvolvimento em C:

| Função | Descrição |
| :--- | :--- |
| `ft_substr` | Extrai uma sub-string de uma string a partir de um índice e tamanho definidos. |
| `ft_strjoin` | Concatena duas strings em uma nova string alocada dinamicamente. |
| `ft_strtrim` | Remove caracteres específicos do início e do fim de uma string. |
| `ft_split` | Divide uma string em um array de strings utilizando um caractere delimitador. |
| `ft_itoa` | Converte um número inteiro (`int`) para uma string (`char *`). |
| `ft_strmapi` | Aplica uma função a cada caractere de uma string para criar uma nova string. |
| `ft_striteri` | Aplica uma função a cada caractere de uma string passando o índice. |
| `ft_putchar_fd` | Escreve um caractere em um File Descriptor (`fd`) específico. |
| `ft_putstr_fd` | Escreve uma string em um File Descriptor (`fd`) específico. |
| `ft_putendl_fd` | Escreve uma string seguida de uma quebra de linha em um File Descriptor. |
| `ft_putnbr_fd` | Escreve um número inteiro em um File Descriptor específico. |

---

### 🌟 Parte Bônus - Manipulação de Listas Encadeadas
Estrutura de dados para manipulação de listas encadeadas utilizando a struct `t_list`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
