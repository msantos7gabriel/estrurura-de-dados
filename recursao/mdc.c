/*O Conceito do Algoritmo
O método de Euclides usa uma regra simples: o MDC de dois números (a e b)
é igual ao MDC de b e o resto da divisão de a por b (a % b)
Quando o resto for zero, o número b atual é o MDC.*/

#include <stdio.h>

// Função que calcula o MDC usando o Algoritmo de Euclides
int calcularMDC(int a, int b)
{
    int retorno_mdc;
    // Caso Base
    if (b == 0)
    {
        printf("\nAchou o mdc: %d", a);
        return a;
    } /*Por razões de debug usei o else, porem não é necessário no algorítimo de Euclides*/
    else
    {
        printf("\nMDC entre: A:%d e B:%d", a, b);
        printf("\nPelo valor de b não ser 0 então os parâmetros serão: %d e %d (%d %% %d)\n", b, a % b, a, b);
    }
    // Chamada recursiva da função
    retorno_mdc = calcularMDC(b, a % b /* Aproximação do Caso Base */);
    return retorno_mdc;
}

int main()
{
    // 48 18
    int entrada1, entrada2;
    printf("Escreva o Primeiro Numero que deseja saber o MDC: ");
    scanf("%d", &entrada1);

    printf("Escreva o Segundo Numero que deseja saber o MDC: ");
    scanf("%d", &entrada2);

    int resultado = calcularMDC(entrada1, entrada2);

    printf("\nO MDC de %d e %d e: %d\n", entrada1, entrada2, resultado);
    return 0;
}