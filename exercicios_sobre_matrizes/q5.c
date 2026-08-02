#include <stdio.h>

int main()
{
    int matriz[10][10], soma = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j > i)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma dos valores acima da diagonal principal: %i\n", soma);

    return 0;
}
