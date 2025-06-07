#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void entradaNomes(char nomes[10][40]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite o %2do. nome: ", i+1);
        fflush(stdin); fgets(nomes[i], 40, stdin);
    }
}

void ordenaNomes(char nomes[10][40]) {
    int i, j;
    char temp[40];
    for (i = 0; i < 9; i++)
        for (j = i+1; j < 10; j++)
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
}

void apresentaNomes(char nomes[10][40]) {
    int i;
    printf("\n");
    for (i = 0; i < 10; i++)
        printf("Nome: %2d --> %s", i+1, nomes[i]);
}

char perguntaOrdenacao() {
    char op;
    printf("\nVoce deseja organizar os nomes em ordem alfabetica? Sim[S] / Nao[N]: ");
    fflush(stdin); op = getchar();
    while (getchar() != '\n' && !feof(stdin));
    return op;
}

char perguntaContinua() {
    char resp;
    printf("\n\nContinua? Sim[S] / Nao[N]: ");
    fflush(stdin); resp = getchar();
    while (getchar() != '\n' && !feof(stdin));
    return resp;
}

int pesquisaNome(char nomes[10][40], char pesq[40]) {
    int i;
    for (i = 0; i < 10; i++) {
        if (strcmp(pesq, nomes[i]) == 0)
            return i;
    }
    return -1;
}

int main(void)
{
    char NOME[10][40], PESQ[40], RESP, OPCAO;
    int pos;
    printf("\nPesquisa e listagem sequencial de nomes\n\n");

    entradaNomes(NOME);

    OPCAO = perguntaOrdenacao();

    if (OPCAO == 'S' || OPCAO == 's') {
        ordenaNomes(NOME);
        printf("\nNomes organizados em ordem alfabetica:\n");
        apresentaNomes(NOME);
        system("pause");
    } else {
        printf("\nO sistema utilizara os nomes organizados na ordem de lancamento original.\n");
    }

    RESP = 'S';
    while (RESP == 'S' || RESP == 's') {
        printf("\nDigite o nome que deseja ser pesquisado: ");
        fflush(stdin); fgets(PESQ, 40, stdin);

        pos = pesquisaNome(NOME, PESQ);

        if (pos != -1)
            printf("%s foi localizado na posicao %d", PESQ, pos+1);
        else
            printf("%s nao foi localizado", PESQ);

        RESP = perguntaContinua();
    }
    return 0;
}