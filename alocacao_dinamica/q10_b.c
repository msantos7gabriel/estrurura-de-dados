#include <stdio.h>
#include <stdlib.h>

int main()
{
    const long int TAMANHO_VETOR = 1000000;
    int *ptr_vetor = calloc(TAMANHO_VETOR, sizeof(*ptr_vetor));
    unsigned long long int soma = 0;

    for (long int i = 0; i < TAMANHO_VETOR; i++)
    {
        ptr_vetor[i] = i;
        soma += ptr_vetor[i];
    }

    printf("Soma: %lld", soma);
}