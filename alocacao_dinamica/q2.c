#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    int maior[2];
    int menor[2];
    // 0 para o valor e 1 para o índice

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
        if (i == 0 || ptr_vet[i] > maior[0])
        {
            maior[0] = ptr_vet[i];
            maior[1] = i;
        }
        if (i == 0 || menor[0] > ptr_vet[i])
        {
            menor[0] = ptr_vet[i];
            menor[1] = i;
        }
    }

    printf("\nMaior: %d, Posição: %d", maior[0], maior[1]);
    printf("\nMenor: %d, Posição: %d", menor[0], menor[1]);

    free(ptr_vet);
    ptr_vet = NULL;
    return 0;
}