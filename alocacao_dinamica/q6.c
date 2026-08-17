#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;

    int *ptr_vet = malloc(5 * sizeof(*ptr_vet));
    if (ptr_vet == NULL)
    {
        printf("\nErro na alocação de memoria");
        return 1;
    }

    for (unsigned int i = 0; i < 5; i++)
    {
        printf("Escreva o valor da posição[%d] do vetor: ", i);
        scanf("%d", &ptr_vet[i]);
    }

    printf("\nDigite quantos numeros deseja adicionar no vetor: ");
    scanf("%d", &n);

    int *ptr_temp = realloc(ptr_vet, n * sizeof(*ptr_vet));
    if (ptr_temp == NULL)
    {
        free(ptr_vet);
        return 1;
    }
    ptr_vet = ptr_temp;

    for (unsigned int i = 5; i < n; i++)
    {
        printf("Escreva o valor da posição[%d] do vetor: ", i);
        scanf("%d", &ptr_vet[i]);
    }

    for (unsigned int i = 0; i < n; i++)
    {
        printf("\nO valor da posição[%d] do vetor: %d", i, ptr_vet[i]);
    }

    free(ptr_vet);
    ptr_vet = NULL;
    return 0;
}