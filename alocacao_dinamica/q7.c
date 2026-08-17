#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *ptr_vet = malloc(n * sizeof(*ptr_vet));
    if (ptr_vet == NULL)
    {
        printf("\nErro na alocação de memoria");
        return 1;
    }

    for (unsigned int i = 0; i < n; i++)
    {
        printf("Escreva o valor da posição[%d] do vetor: ", i);
        scanf("%d", &ptr_vet[i]);
    }

    // Verificação do índice
    do
    {
        printf("\nDigite o índice da posição que deseja remover: ");
        scanf("%d", &m);
        if (m >= n)
        {
            printf("Valor invalido tente novamente\n");
        }
    } while (m >= n);

    for (unsigned int i = m; i < n - 1; i++)
    {
        ptr_vet[i] = ptr_vet[i + 1];
    }

    int *ptr_temp = realloc(ptr_vet, ((n - 1) * sizeof(*ptr_vet)));
    if (ptr_temp == NULL)
    {
        printf("\nErro na alocação de memoria");
        free(ptr_vet);
        return 1;
    }
    ptr_vet = ptr_temp;

    for (unsigned int i = 0; i < n-1; i++)
    {
        printf("\nO valor da posição[%d] do vetor: %d", i, ptr_vet[i]);
    }
    
    free(ptr_vet);
    ptr_vet = NULL;
    return 0;
}