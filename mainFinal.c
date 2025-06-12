/* Pesquisa */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  int I, J, ACHA;
  char NOME[10][40], PESQ[40], RESP, X[40];

  printf("\nPesquisa e Listagem sequencial de nomes\n\n");

  /* Entrada dos dados */
  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I+1);
      fflush(stdin); fgets(NOME[I], 40, stdin);
      NOME[I][strcspn(NOME[I], "\n")] = '\0'; // Remove o ENTER do final do nome
    }

  /* Ordenacao de strings */
  for (I = 0; I <= 8; I++)
    for (J = I+1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  /* Apresentacao dos nomes */

  printf("\n");
  for (I = 0; I <= 9; I++)
      printf("Nome: %2d --> %s\n", I+1, NOME[I]);
  printf("\n"); // Linha extra após o último nome
  system("pause");

  /* Processamento da pesquisa enquanto RESP = S */

  RESP = 'S';
  while (RESP == 'S' || RESP == 's')
    {
      printf("\nEntre o nome a ser pesquisado: "); 
      fflush(stdin); fgets(PESQ, 40, stdin);
      PESQ[strcspn(PESQ, "\n")] = '\0'; // Remove o ENTER do final
      I = 0;
      ACHA = 0;
      while (I <= 9 && ACHA == 0)
        if (strcmp(PESQ, NOME[I]) == 0)
          ACHA = 1;
        else
          I += 1;
      if (ACHA == 1) 
        printf("\n%s foi localizado na posicao %d",PESQ, I+1);
      else
        printf("\n%s nao foi localizado", PESQ);
      printf("\n\nContinua? SIM[S] / NAO[N] + <Enter>: "); 
      fflush(stdin); RESP = getchar();
      while (getchar() != '\n'); // Limpa o buffer até o ENTER
    }
  return(0);
}