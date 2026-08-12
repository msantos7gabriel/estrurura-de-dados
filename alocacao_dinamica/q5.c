#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, par, impar;
    // Leia n números inteiros
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // em um vetor dinâmico
    int *ptr_vet = malloc(n * sizeof(*ptr_vet));
    if (ptr_vet == NULL)
    {
        printf("\nErro na alocação de memoria de ptr_vet");
        return 1;
    }

    for (unsigned int i = 0; i < n; i++)
    {
        printf("Escreva o valor da posição[%d] do vetor: ", i);
        scanf("%d", &ptr_vet[i]);
        // Em seguida, conte a quantidade de valores pares e ímpares
        if (ptr_vet[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    // aloque dois novos vetores com os tamanhos exatos necessários.
    int *pares = malloc(par * sizeof(*pares));
    if (pares == NULL)
    {
        printf("\nErro na alocação de memoria de pares");
        return 1;
    }
    int *impares = malloc(impar * sizeof(*impares));
    if (impares == NULL)
    {
        printf("\nErro na alocação de memoria de impares");
        return 1;
    }

    for (unsigned int i = 0, i_par = 0, i_impar = 0; i < n; i++)
    {
        if (ptr_vet[i] % 2 == 0)
        {
            pares[i_par] = ptr_vet[i];
            i_par++;
        }
        else
        {
            impares[i_impar] = ptr_vet[i];
            i_impar++;
        }
    }
    // Liberação e Nulificação de ptr_vet
    free(ptr_vet);
    ptr_vet = NULL;

    printf("\nPares: ");
    for (unsigned int i = 0; i < par; i++)
    {
        printf("%d ", pares[i]);
    }
    // Liberação e Nulificação de pares
    free(pares);
    pares = NULL;

    printf("\nImpares: ");
    for (unsigned int i = 0; i < impar; i++)
    {
        printf("%d ", impares[i]);
    }
    // Liberação e Nulificação de Impares
    free(impares);
    impares == NULL;

    return 0;
}