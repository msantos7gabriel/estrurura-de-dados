#include <stdio.h>
#include <stdlib.h>

int main()
{
    const long int n = 50000000;
    printf("Quantidade para alocar: %ld", n);
    int *quebra_pc = calloc(n, sizeof(*quebra_pc));
    if (quebra_pc == NULL)
    {
        printf("\nFalha na alocação");
        exit(EXIT_FAILURE);
    }

    for (long int i = 0; i < n; i++)
    {
        printf("\n%i", quebra_pc[i]);
        printf(" %li", i);
    }
    free(quebra_pc);
    return 0;
}