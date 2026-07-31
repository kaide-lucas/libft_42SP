<h1 align="center">
	🧪 Libft - @42SP
</h1>

<p align="center">
	<b><i>O primeiro projeto do Cursus da 42 — recriando a biblioteca padrão da linguagem C.</i></b>
</p>

<p align="center">
	<img src="https://img.shields.io/badge/Score-100%2F100-success?style=for-the-badge&logo=42" alt="42 Grade" />
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

### 1. Clonar o repositório
```bash
git clone https://github.com/kaide-lucas/libft_42SP.git
cd libft_42SP
```
### 2. Comandos do Makefile

* **`make`** ou **`make all`**: Compila os arquivos da parte obrigatória e gera a biblioteca estática `libft.a`.
* **`make bonus`**: Compila tanto a parte obrigatória quanto as funções bônus (listas encadeadas) na `libft.a`.
* **`make clean`**: Remove todos os arquivos objetos (`.o`).
* **`make fclean`**: Remove os arquivos objetos (`.o`) e o arquivo da biblioteca (`libft.a`).
* **`make re`**: Executa `fclean` e recompila o projeto do zero.

---

## 🚀 Como Utilizar no seu Projeto

Para utilizar as funções da **Libft** em seus próprios projetos em C, siga os passos abaixo:

### 1. Inclua o cabeçalho no código C
No seu arquivo de código (ex: `main.c`), inclua o cabeçalho da biblioteca:

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42 SP!";
    
    // Usando uma função da libft
    ft_putendl_fd(str, 1);
    
    return (0);
}
```

### 2. Compilação apontando para a biblioteca
Ao compilar seu projeto com `gcc` ou `clang`, certifique-se de indicar onde está o arquivo `libft.a`:

```bash
# Exemplo 1: Se a libft.a estiver no mesmo diretório do seu main.c
gcc -Wall -Wextra -Werror main.c -L. -lft -o meu_programa

# Exemplo 2: Se a libft estiver em uma subpasta chamada "libft"
gcc -Wall -Wextra -Werror main.c -I./libft -L./libft -lft -o meu_programa
```

---

## 🧪 Testadores Recomendados

Para validar a implementação das funções, vazamentos de memória (leaks) e edge cases, você pode utilizar os seguintes testadores da comunidade 42:

* 🇫🇷 **[Francinette](https://github.com/xicadamelhor/francinette)**: O testador mais completo e atualizado para os projetos da 42 (inclui testes com Moulinette/Norminette e verificação de memória com Valgrind).
* 🧪 **[libftTester](https://github.com/Tripouille/libftTester)**: Testador com interface visual simples e testes unitários muito detalhados para cada função.
* ⚡ **[libft-unit-test](https://github.com/alelievr/libft-unit-test)**: Excelente testador para validação rápida de erros de alocação de memória e *segfaults*.

---

## 👤 Autor

Feito por **Kaide Lucas** 👋

* **Campus:** 42 São Paulo
* **GitHub:** [@kaide-lucas](https://github.com/kaide-lucas)

[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/kaide-lucas)
