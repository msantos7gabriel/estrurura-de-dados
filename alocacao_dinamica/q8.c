#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m, soma = 0;

    printf("Digite a quantidade de linhas do vetor: ");
    scanf("%d", &n);

    printf("Digite a quantidade de colunas do vetor: ");
    scanf("%d", &m);

    int maior, soma_linha[n];

    int **prt_vet = malloc(n * sizeof(*prt_vet));
    if (prt_vet == NULL)
    {
        printf("\nErro: Memoria insuficiente para o vetor de ponteiros.");
        return 1;
    }
    for (unsigned int i = 0; i < n; i++)
    {
        prt_vet[i] = malloc(m * sizeof(int));
        if (prt_vet[i] == NULL)
        {
            printf("\nErro: Memoria insuficiente para alocar as colunas do índice: %d", i);
            for (unsigned int j = 0; j < i; j++)
            {
                free(prt_vet[j]);
            }
            return 1;
        }
    }

    for (unsigned int i = 0; i < n; i++)
    {
        for (unsigned j = 0; j < m; j++)
        {
            printf("\nEntre com os valores dos indices %d %d:  ", i, j);
            scanf("%d", &prt_vet[i][j]);
            // Soma de todos os elementos
            soma += prt_vet[i][j];

            // Soma linha
            soma_linha[i] += prt_vet[i][j];

            // Maior elemento
            if (i == 0 && j == 0)
            {
                maior = prt_vet[i][j];
            }
            else if (prt_vet[i][j] > maior)
            {
                maior = prt_vet[i][j];
            }
            printf("\nValor: %d, i: %d, j:%d", prt_vet[i][j], i, j);
        }
    }

    printf("\nSoma todos elementos: %d", soma);

    for (unsigned int i = 0; i < n; i++)
    {
        printf("Linha: %d, Soma: %d", i, soma_linha[i]);
    }

    // Liberar a memoria
    for (unsigned int i = 0; i < n; i++)
    {
        free(prt_vet[i]);
    }
    free(prt_vet);
    return 0;
}