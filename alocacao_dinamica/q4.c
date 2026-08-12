#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;

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

    if (n % 2 == 0)
    {
        for (unsigned int i = 0, j = n - 1, temp; i < (n / 2); i++, j--)
        {
            temp = ptr_vet[i];
            ptr_vet[i] = ptr_vet[j];
            ptr_vet[j] = temp;
        }
    }
    else
    {
        for (unsigned int i = 0, j = n - 1, temp; i != j; i++, j--)
        {
            temp = ptr_vet[i];
            ptr_vet[i] = ptr_vet[j];
            ptr_vet[j] = temp;
        }
    }

    printf("\nVetor invertido: ");
    for (unsigned int i = 0; i < n; i++)
    {
        printf("%d ", ptr_vet[i]);
    }

    free(ptr_vet);
    ptr_vet = NULL;
    return 0;
}