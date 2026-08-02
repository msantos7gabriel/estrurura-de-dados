#include <stdio.h>

int main()
{
    int matriz[10][10];

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
            if (i > j)
            {
                printf("Valor: %i, linha: %i, coluna: %i\n", matriz[i][j], i, j);
            }
        }
    }

    return 0;
}
