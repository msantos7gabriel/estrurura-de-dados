#include <stdio.h>

int main()
{
    int matriz[4][5], soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%i", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("Soma: %i", soma);
    return 0;
}
