#include <stdio.h>

unsigned long long fatorial(unsigned n)
{
    long long int valor_de_retorno_do_fatorial;
    // Caso Base
    if (n <= 1)
    {
        /* <Debug> */
        printf("\n___________________");
        printf("\nCaso Base atingido");
        /* </Debug> */

        // Retorno do caso Base
        return 1;
    }
    valor_de_retorno_do_fatorial = n * fatorial(n - 1 /* Aproximação do caso base */);
    /* <Debug> */
    printf("\nFatorial de :%lld, resultado:%lld", n, valor_de_retorno_do_fatorial);
    /* </Debug> */

    /*Retorno com chamada recursiva (chamando a própria função)*/
    return valor_de_retorno_do_fatorial;
}

int main()
{
    int entrada;
    printf("Escreva o Numero que deseja saber o fatorial: ");
    scanf("%d", &entrada);

    printf("");
    printf("\nFatorial retornado: %lld", fatorial(entrada));
    return 0;
}