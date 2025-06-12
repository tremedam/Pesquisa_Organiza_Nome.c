
# Pesquisa e Ordenação de Nomes em C

Este projeto em C implementa um pequeno sistema de entrada, ordenação e busca de nomes, com interação direta via terminal. É um exercício prático de manipulação de strings, vetores e controle de fluxo.

## Funcionalidades

- Entrada de 10 nomes via terminal.
- Ordenação alfabética dos nomes (método de ordenação simples).
- Exibição da lista ordenada.
- Pesquisa de nomes com feedback sobre a posição ou ausência.
- Loop de pesquisa até o usuário decidir encerrar.

## Tecnologias

- Linguagem C
- Funções padrão da biblioteca `<stdio.h>`, `<string.h>`, `<stdlib.h>`

## Como executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   cd seu-repositorio
   ```

2. Compile o código:
   ```bash
   gcc -o pesquisa_nomes mainFinal.c
   ```

3. Execute o programa:
   ```bash
   ./pesquisa_nomes
   ```

## Exemplos de uso

```
Digite o  1o. nome: Ana
Digite o  2o. nome: Bruno
...

Nome:  1 --> Ana
Nome:  2 --> Bruno
...

Entre o nome a ser pesquisado: Bruno
Bruno foi localizado na posicao 2

Continua? [S]IM/[N]AO + <Enter>:
```

## Conceitos aplicados

- Entrada e saída com `fgets` e `printf`
- Ordenação de strings com `strcmp` e `strcpy`
- Pesquisa sequencial
- Uso de laços `for` e `while`
- Controle de fluxo com condicionais

## Observações

- O uso de `fflush(stdin)` não é padrão-portável em C. Pode funcionar em alguns compiladores como o GCC no Windows, mas não em ambientes POSIX.
- A ordenação é feita com comparação de strings estilo bubble sort.

## Propósito educacional

Esse código é ideal para estudantes de programação que estão aprendendo:
- Manipulação básica de strings em C
- Algoritmos de ordenação e busca
- Lógica de repetição e controle