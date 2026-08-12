#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    float media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float *ptr_vet = malloc(n * sizeof(*ptr_vet));
    if (ptr_vet == NULL)
    {
        printf("\nErro na alocação de memoria");
        return 1;
    }

    for (unsigned int i = 0; i < n; i++)
    {
        printf("Escreva o valor da posição[%d] do vetor: ", i);
        scanf("%f", &ptr_vet[i]);
        media += ptr_vet[i];
    }

    media /= n;

    printf("\nValores acima da media %2.f: ", media);
    for (unsigned int i = 0; i < n; i++)
    {
        if (ptr_vet[i] > media)
        {
            printf("\nvalor: %2.f, Posição: %d", ptr_vet[i], n);
        }
    }

    free(ptr_vet);
    ptr_vet = NULL;
    return 0;
}