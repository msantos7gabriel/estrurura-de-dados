#include <stdio.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("i:%i , j:%i\n", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i = 0, j = 0; i < 3; i++, j++)
    {
        printf("Valor: %i, linha: %i, coluna: %i\n", matriz[i][j], i, j);
    }

    return 0;
}
