#include <stdio.h>
// 0 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7  8  9 10
int fibonacci(unsigned n)
{
    long long int valor_de_retorno_de_fibonacci;
    // Caso Base

    if (n == 1)
    {
        /*Caso base do primeiro Posição*/
        printf("\nRetornou 0, Posição: %d", n);
        return 0;
    }
    if (n == 2)
    {
        /*Caso base do segundo Posição*/
        printf("\n__________");
        printf("\nRetornou 1, Posição: %d", n);
        return 1;
    }

    valor_de_retorno_de_fibonacci = fibonacci(n - 1) + fibonacci(n - 2);
    /* <Debug> */
    printf("\nResultado Valor da Posição: %d", n);
    printf("\nAs Somas das Posições %d e %d tem resultado resultado:%d\n", n - 1, n - 2, valor_de_retorno_de_fibonacci);
    /* </Debug> */

    /*Retorno com chamada recursiva (chamando a própria função)*/
    return valor_de_retorno_de_fibonacci;
}

int main()
{
    int entrada;
    printf("Digite a posição que deseja saber da sequência de fibonacci: ");
    scanf("%d", &entrada);

    printf("");
    printf("\nNa Posição %d foi retornado: %d", entrada, fibonacci(entrada));
    return 0;
}