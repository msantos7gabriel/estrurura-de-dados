#include <stdio.h>
#include <stdlib.h>

int main()
{
    const long int TAMANHO_VETOR = 100000000;
    int soma = 0;
    int *ptr_vetor = calloc(TAMANHO_VETOR, sizeof(*ptr_vetor));

    for (unsigned int i = 0; i < TAMANHO_VETOR; i++)
    {
        soma += ptr_vetor[i];
    }
    printf("Soma: %d", soma);
}

/* Testes:

1- 0m0,221s
2- 0m0,228s
3- 0m0,226s
4- 0m0,220s
5- 0m0,224s

Media ~= 0m0,224s
*/