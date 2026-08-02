#include <stdio.h>

int main()
{
    int matriz[3][3], maior, pos[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%i", &matriz[i][j]);
            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
                pos[0] = i;
                pos[1] = j;
            }
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                pos[0] = i;
                pos[1] = j;
            }
        }
    }
    printf("Valor: %i, Linha: %i, Coluna: %i\n", maior, pos[0], pos[1]);
    return 0;
}
