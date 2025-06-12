
# Sistema Interativo de Pesquisa e Ordenação de Nomes em C

Este projeto em linguagem C simula um sistema de cadastro, ordenação opcional e pesquisa de nomes, com uma estrutura modularizada em funções. O foco é aprimorar a lógica de programação com práticas de boas estruturas e divisão de responsabilidades.

## Funcionalidades

- Entrada de 10 nomes pelo usuário.
- Ordenação opcional dos nomes em ordem alfabética.
- Exibição da lista ordenada (caso solicitada).
- Pesquisa sequencial de nomes com retorno da posição ou aviso de não encontrado.
- Execução contínua da pesquisa até o usuário optar por encerrar.

## Tecnologias

- Linguagem C
- Uso de bibliotecas padrão: `<stdio.h>`, `<string.h>`, `<stdlib.h>`

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
Digite o  1o. nome: Carlos
Digite o  2o. nome: Amanda
...

Voce deseja organizar os nomes em ordem alfabetica? Sim[S] / Nao[N]: S

Nomes organizados em ordem alfabetica:
Nome:  1 --> Amanda
Nome:  2 --> Carlos
...

Digite o nome que deseja ser pesquisado: Carlos
Carlos foi localizado na posicao 2

Continua? Sim[S] / Nao[N]:
```

## Conceitos aplicados

- Modularização com funções (`entradaNomes`, `ordenaNomes`, `pesquisaNome` etc.)
- Limpeza do buffer de entrada para evitar bugs com `fgets` e `getchar`
- Comparação e manipulação de strings (`strcmp`, `strcpy`, `strcspn`)
- Estruturas de repetição e condicionais

## Observações

- A limpeza do `\n` lido pelo `fgets` é feita com `strcspn`, técnica mais segura e portável.
- `fflush(stdin)` é usado apenas como recurso complementar, embora não seja totalmente portável.
- O código está estruturado para ser facilmente mantido ou ampliado.

## Propósito educacional

Ideal para estudantes que estão:
- Começando a modularizar código em C
- Praticando entrada, ordenação e pesquisa de strings
- Aprendendo a lidar com entrada de dados em terminais interativos