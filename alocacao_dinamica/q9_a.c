#include <stdio.h>
#include <stdlib.h>

int main()
{
    const long int TAMANHO_VETOR = 100000000;
    int soma = 0;
    int *ptr_vetor = malloc(TAMANHO_VETOR * sizeof(*ptr_vetor));

    for (unsigned int i = 0; i < TAMANHO_VETOR; i++)
    {
        ptr_vetor[i] = 0;
        soma += ptr_vetor[i];
    }
    printf("Soma: %d", soma);
}

/* Testes:

1- 0m0,366s
2- 0m0,348s
3- 0m0,353s
4- 0m0,363s
5- 0m0,363s

Media ~= 0m0,359s
*/